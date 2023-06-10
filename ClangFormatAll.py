import os
import sys

print(sys.path[0])
source = []
for file in os.scandir(sys.path[0]) :
    if file.name.endswith(".c") or file.name.endswith(".cpp") or file.name.endswith(".h") or file.name.endswith(".hpp") :
        source.append(file.name)

os.system("clang-tidy " + " ".join(source) + " -fix")