import platform, os, sys, commands
from os import listdir
from os.path import isfile, join

pwd = os.path.abspath(os.path.dirname(sys.argv[0]))

def plat_get():
	plat = platform.system()
	if plat == "Linux":
		# Which Linux is this?
		plat = commands.getstatusoutput("cat /etc/os-release | grep 'ID_LIKE.*'")[1][8:].capitalize()
	return plat

plat = plat_get()

if len(sys.argv) > 1:
	if(sys.argv[1] == "-h"):
		print "Usage: launcher.pyc script_name [no script file extension]\n\nAvailable scripts are: "
		script_path = pwd + "/" + plat
		script_files = [f for f in listdir(script_path) if isfile(join(script_path, f))]
		for i in range(len(script_files)):
			print str(i+1) + "> " + script_files[i].replace(".bat", "").replace(".sh", "")
		sys.exit(0)

# Run scripts:
if plat == "Debian":
	# Run Debian's scripts
	if len(sys.argv) > 1:
		os.system(pwd + "/Debian/" + sys.argv[1] + ".sh")
	else:
		os.system(pwd + "/Debian/build.sh")
if plat == "Windows":
	# Run Windows' scripts
	if len(sys.argv) > 1:
		os.system(pwd + "/Windows/" + sys.argv[1]+".bat")
	else:
		os.system(pwd + "/Windows/build.bat")