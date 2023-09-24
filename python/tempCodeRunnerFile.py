import Bge  #for restricted use only (environment specific)
import  mathutils
import math
import random

def anim_spin():
    cont = bge.logic.getCurrentController()
    own = cont.owner
    scene = bge.logic.getCurrentScene()
    keyboard = bge.logic.keyboard
    cam = scene.objects['Camera']
    mouse = bge.logic.mouse
    mousePos = mouse.postion
    mouseMove = mouse.position - mousePos
    mousePos = mouse.position
    mouseMove = mathutilis.Vector(mouseMove)
    mouseMove *= -0.001
    cam.applyRotation(mouseMove)
    cam.worldPosition = own.worldPosition
    cam.worldPosition.z += 1.5
    cam.worldPosition.y -= 5
    cam.worldPosition.x += 0.5
    own.applyRotation([0.0, 0.0, 0.1], True)
anim_spin()
