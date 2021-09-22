#!/usr/bin/python3

import sys

passwd = input('Enter Password - ').replace('\n', '')
if 'cj{bj^ewcjfxj' == (lambda passwd:''.join((chr((ord(i) ^ 9) - 4 + 2) for i in passwd)))(passwd):sys.exit('G00D J08!!')
else:sys.exit('W04K H4RD!!!')
