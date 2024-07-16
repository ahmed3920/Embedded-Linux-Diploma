import pyautogui as pag
import os
from time import sleep
import webbrowser
url_sheet='https://docs.google.com/spreadsheets/d/1MDo9vHOqzYhLsZUmhlZ8qN0Cl_R35KtNdp_TmgWWp1Q/edit?gid=1871002576#gid=1871002576'
url_whats='https://web.whatsapp.com/'
webbrowser.open(url_sheet,new=2)

isFind=None
while isFind is None:
    try:
        isFind = pag.locateOnScreen("details_sheet.png",confidence=0.9)
        sleep(1)
    except pag.ImageNotFoundException:
        print("there is no image")
        
pag.click(isFind.left+10,isFind.top+30,duration=1)
pag.keyDown('shift')
pag.hotkey('right')
sleep(1)
for i in range(12):
    pag.hotkey('down')
    sleep(0.1)
pag.keyUp('shift')
pag.keyDown('ctrl')
pag.hotkey('c')
pag.keyUp('ctrl')

webbrowser.open(url_whats,new=2)
# sleep(10)
isFind=None
while isFind is None:
    try:
        isFind = pag.locateOnScreen("hanen.png",confidence=0.9)
        sleep(1)
    except pag.ImageNotFoundException:
        print("there is no image")

pag.click(isFind.left+10,isFind.top+30,duration=1)
pag.keyDown('ctrl')
pag.hotkey('v')
pag.keyUp('ctrl')
pag.hotkey('enter')