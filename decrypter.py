text = "++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>.>---.++++++++++++.++.++++++.--.<<++.>>------.------------.+++++++++++++.<<.>>++++++.------------.-------. +++++++++++++++++++.<<.>>----------------.+++++.+++++++++.-------------.--.+ ++++++++++++++++.--------.+++++++++++++.<<.>>-----------------------.+++.+++ ++++.---.----.+++++++++++++++++.-----------------.-.<<.>>+++++.+++++.<<.>-------..."

alphabet = "abcdefghijklmnopqrstuvwxyz"

count = 0
for c in text:
    if c == '+':
        count += 1
    elif c == '-':
        count -= 1
    elif c == '.':
        print(count, end='', flush=True)
        count = 0
    else:
        print(c, end='', flush=True)
        count = 0

