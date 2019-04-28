1 interface settupable
2 interface ??? reader?

1 class blinky
2 class analoglight
3 class analogreader => lightsensor (kan stabeliseren in class)
4 class digitalreader

=======

1 interface sensable yes
2 interface setupable yes

1 class blinky > setupable yes
2 class lightsensor > sensable
3 class button > sensable yes
4 class beep > setupable yes

interrupts seperate demo

functional test