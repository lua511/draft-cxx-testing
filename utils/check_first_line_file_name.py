#!/usr/bin/python
# -*- coding: UTF-8 -*-

def dump_if_not_right_name(full_name):
    import os
    raw_name = os.path.basename(full_name)

    with open(full_name,'r') as fin:
        fline = fin.readline()
        fline = fline.replace('/','').strip()
        if raw_name != fline:
            print raw_name
            return 1
    return 0

def fun_main():
    import os
    root_dir = os.getcwd()

    count = 0
    import glob
    for filename in glob.glob(root_dir + '/*.cpp'):
        count += dump_if_not_right_name(filename)

    print 'found: {} error file names'.format(count)

if __name__ == '__main__':
    fun_main()