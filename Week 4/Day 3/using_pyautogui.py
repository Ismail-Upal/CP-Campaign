import pyautogui
n=int (input())

for i in range(n):
        s='*' * (i+1)
        pyautogui.write(s+ '\n')

