#create a 3d game using python
#this is a simple game where you have to dodge the falling blocks
#the game is over when you hit a block

import pygame
import random
import math
from pygame import mixer

#initialize pygame
pygame.init()

#create the screen
screen = pygame.display.set_mode((800,600))

#background
background = pygame.image.load('background.png')

#background sound
mixer.music.load('background.wav')
mixer.music.play(-1)

#title and icon
pygame.display.set_caption("3d game")
icon = pygame.image.load('ufo.png')
pygame.display.set_icon(icon)

#player
playerImg = pygame.image.load('player.png')
playerX = 370
playerY = 480
playerX_change = 0

#enemy
enemyImg = []
enemyX = []
enemyY = []
enemyX_change = []
enemyY_change = []
num_of_enemies = 6

for i in range(num_of_enemies):
    enemyImg.append(pygame.image.load('enemy.png'))
    enemyX.append(random.randint(0,735))
    enemyY.append(random.randint(50,150))
    enemyX_change.append(4)
    enemyY_change.append(40)    

#bullet
#ready - you can't see the bullet on the screen
#fire - the bullet is currently moving
bulletImg = pygame.image.load('bullet.png')
bulletX = 0
bulletY = 480
bulletX_change = 0
bulletY_change = 10
bullet_state = "ready"

#score
score_value = 0
font = pygame.font.Font('freesansbold.ttf', 32)

textX = 10
textY = 10

#game over text
over_font = pygame.font.Font('freesansbold.ttf', 64)

def show_score(x,y):
    score = font.render("Score : " + str(score_value), True, (255,255,255))
    screen.blit(score, (x,y))

def game_over_text():
    over_text = over_font.render("GAME OVER", True, (255,255,255))
    screen.blit(over_text, (200,250))

def player(x,y):
    screen.blit(playerImg, (x,y))
    
def enemy(x,y,i):
    screen.blit(enemyImg[i], (x,y))

def fire_bullet(x,y):
    global bullet_state
    bullet_state = "fire"
    screen.blit(bulletImg, (x + 16, y + 10))

def isCollision(enemyX, enemyY, bulletX, bulletY):
    distance = math.sqrt((math.pow(enemyX-bulletX,2)) + (math.pow(enemyY-bulletY,2)))
    if distance < 27:
        return True
    else:
        return False

#game loop
running = True
while running: