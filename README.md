# Veriloc
Veriloc is a C compiler that converts C code to normal Verilog code.


# How to Build
* From the top folder of the project, run `toolchain/launcher.pyc build`

* You can see what scripts are available by running `toolchain/launcher.pyc -h`

* The output file will be the compiler executable, which will be outputted into the folder 'bin'

# How to Run

* In order to run the compiler simply go to 'bin' and execute:
 `> veriloc filename`.

* You can also do this by going into thefolder 'testbench', where you can **drag and drop** a test file into the script 'run_test.pyc'. The test file's **filename** must have this format: test_yourname.txt.
**Example filenames**: test1, test_mytest.txt, test_trythis.vc
