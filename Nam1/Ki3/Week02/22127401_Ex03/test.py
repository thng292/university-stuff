import os
import random
import argparse
import subprocess

def generateRandomTest(size, filename):
    f = open(filename, "w")
    f.write(str(size) + "\n")
    for i in range(size):
        f.write(str(random.randint(0, 1_000_000)) + " ")
        # f.write(str(i) + " ")
    f.close()

def compileAndRun(compiler, inputSize, times, timeout):
    output = {}
    for file in os.listdir("."):
        if file.endswith(".c"):
            os.system(compiler + " -O3 " + file + " -o " + file[:-2] + ".out")
            output[file[:-2]] = []

    for input in inputSize:
        testFileName = f"test{input}.txt"
        generateRandomTest(input, testFileName)
        print("Generated test file with size " + str(input))
        for file in os.listdir("."):
            if file.endswith(".out"):
                avg = 0
                print("Testing " + file)
                t = times
                for i in range(times):
                    try:
                        tmp = subprocess.check_output(f"./{file} {testFileName}".split(), shell=False, timeout=timeout).decode("utf-8")
                        avg += float(tmp)
                    except subprocess.TimeoutExpired:
                        t = 0
                        break
                if t > 0:
                    avg /= t
                    avg *= 1000
                else:
                    avg = None

                output[file[:-4]].append(str(avg))
        os.remove(testFileName)
    for file in os.listdir("."):
            if file.endswith(".out"):
                os.remove(file)
    return output


def main() :
    parser = argparse.ArgumentParser(description='Generate random test and test all file in the directory')
    parser.add_argument('--compiler', type=str, default="gcc", help='Compiler to use')
    parser.add_argument('--times', type=int, default="10", help='Run the test n times')
    parser.add_argument('--timeout', type=float, default="1", help='Timeout for each test')
    args = parser.parse_args()

    inputSize = [10, 20, 30, 100, 1000, 10_000, 100_000, 1_000_000, 2_000_000]
    output = compileAndRun(args.compiler, inputSize, args.times, args.timeout)
    out = open("output.csv", "w")
    out.write("Algorithm," + ','.join([str(i) for i in inputSize]) + "\n")
    for o in output:
        out.write(o + "," + ','.join(output[o]) + "\n")
    out.close()

if __name__ == "__main__":
    main()
