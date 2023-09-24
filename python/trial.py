import bge
import mathutils
import math
import random

# code to move charcecter in forward, backward, left and right direction as desired using arrow keys by the user and camera movements using cursor

def main():
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

    if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.WKEY]:
        own.applyMovement([0.0, 0.1, 0.0], True)           #FORWARD     change 0.1 for speed
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.AKEY]:
            own.applyMovement([-0.1, 0.0, 0.0], True)      #LEFT        change -0.1 for speed
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.SKEY]:
            own.applyMovement([0.0, -0.1, 0.0], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.DKEY]:
            own.applyMovement([0.1, 0.0, 0.0], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.SPACEKEY]:
            own.applyMovement([0.0, 0.0, 0.1], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.LEFTSHIFTKEY]:
            own.applyMovement([0.0, 0.0, -0.1], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.QKEY]:
            own.applyRotation([0.0, 0.0, 0.1], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.EKEY]:
            own.applyRotation([0.0, 0.0, -0.1], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.RKEY]:
            own.applyRotation([0.0, 0.1, 0.0], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.FKEY]:
            own.applyRotation([0.0, -0.1, 0.0], True)
        if bge.logic.KX_INPUT_ACTIVE == keyboard.events[bge.events.ZKEY]:
            own.applyRotation([0.1, 0.0, 0.0], True)
main()