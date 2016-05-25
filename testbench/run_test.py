import os, sys, commands
from os import listdir
from os.path import isfile, join

pwd = os.path.abspath(os.path.dirname(sys.argv[0]))

def run_test(filename):
	# Run test:
	if(filename == "all" or filename == "clean"):
		print "ERROR: Can not launch the requested test. Exiting..."
		sys.exit(0)
	os.system("cd " + pwd + " && cd .. && make -f toolchain/makefile.mak "+filename)
	raw_input()

def show_help(run):
	print "Usage: run_test.pyc testfile\n\nAvailable tests are: "
	tests_path = pwd + "/"
	test_files = [f for f in listdir(tests_path) if isfile(join(tests_path, f))]
	
	# Clean up test_files array:
	for x in range(len(test_files)):
		for i in range(len(test_files)):
			if(test_files[i].find(".py") != -1):
				test_files.remove(test_files[i])
				break
	# Show test files:
	for i in range(len(test_files)):
		print str(i+1) + "> " + test_files[i]
	
	if(run):
		test_files_len = len(test_files)
		while(True):
			print str(test_files_len+1)+"> Exit"
			choose = int(raw_input("\nChoose the script (number): "))
			if(choose == test_files_len+1):
				break
			if(choose > test_files_len or choose < 0):
				print "Invalid test number. Try again"
			run_test(test_files[int(choose) - 1])
			break
	else:
		raw_input()
	sys.exit(0)

if len(sys.argv) > 1:
	if(sys.argv[1] == "-h"):
		show_help(0)
	else:
		run_test(os.path.basename(sys.argv[1]))
else:
	show_help(1)