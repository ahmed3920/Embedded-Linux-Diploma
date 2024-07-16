import requests

ip=requests.get('https://api.ipify.org').text
print(ip)
location = requests.get(f'https://ipinfo.io/{ip}/geo').json()
print(location)