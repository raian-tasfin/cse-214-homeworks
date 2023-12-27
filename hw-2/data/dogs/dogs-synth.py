#!/usr/bin/python3

import sys

def main():
    if len(sys.argv) != 3:
        exit("Wrong number of arguments. Abort.")

    inputPath, outputPath = sys.argv[1], sys.argv[2]

    fobj = open(inputPath)
    lines = fobj.readlines()
    fobj.close()

    table = []
    for line in lines[1:]:
        line = line.strip()
        if line == ",,":
            break
        table.append(line.strip().split(','))

    fobj = open(outputPath, "w")
    print("year,weight,neck", file=fobj)
    print(*table, sep=',',end='\n', file=fobj)
    fobj.close()

if __name__=='__main__':
    main()
