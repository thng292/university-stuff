import os
import sys

os.system(f"clang {sys.argv[1]} -g -fsanitize=memory -fsanitize=undefined -Wall -Wextra")
os.system("./a.out")
os.system("rm a.out")
