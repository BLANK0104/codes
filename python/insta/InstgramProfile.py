import requests
from lxml import html
import re
import sys


def main(username):
    '''main function accept instagram username
    return an dictionary object containging profile deatils
    '''
    url = "https://www.instagram.com/{}/?hl=en".format(username)
    page = requests.get(url)
    tree = html.fromstring(page.content)
    data = tree.xpath('//meta[starts-with(@name,"description")]/@content')

    if data:
        data = tree.xpath('//meta[starts-with(@name,"description")]/@content')
        data = data[0].split(', ')
        followers = data[0][:-9].strip()
        following = data[1][:-9].strip()
        posts = re.findall(r'\d+[,]*', data[2])[0]
        name = re.findall(r'name":"\w*[\s]+\w*"', page.text)[-1][7:-1]
        aboutinfo = re.findall(r'"description":"([^"]+)"', page.text)[0]
        instagram_profile = {
            'success': True,
            'profile': {
                'name': name,
                'profileurl': url,
                'username': username,
                'followers': followers,
                'following': following,
                'posts': posts,
                'aboutinfo': aboutinfo
            }
        }
    else:
        instagram_profile = {
            'success': False,
            'profile': {}
        }
    return instagram_profile


#  python InstgramProfile.py username
if __name__ == "__main__":
    '''driver code'''

    if len(sys.argv) == 2:
        output = main(sys.argv[-1])
        print(output)
    else:
        print('=========>Invalid paramaters Valid Command is<=========== \
        \npython InstagramProfile.py username')