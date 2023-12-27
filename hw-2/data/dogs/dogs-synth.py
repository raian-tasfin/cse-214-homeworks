#!/usr/bin/python3

import sys

def main():
    if len(sys.argv) != 3:
        exit("Wrong number of arguments. Abort.")

    inputPath, outputPath = sys.argv[1], sys.argv[2]

    fobj = open(inputPath)
    lines = fobj.readlines()
    fobj.close()

    fobj = open(outputPath,"w")
    print("year,weight,neck",file=fobj)

    for line in lines[1:]:
        line = line.strip()
        if line == ",,":
            break
        line = line.split(',')
        line[0] = line[0][2:]
        print(*line,sep=',',file=fobj)

    fobj.close()

if __name__=='__main__':
    main()
