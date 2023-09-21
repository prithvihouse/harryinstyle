from turtle import*

def flower():
    for i in range(100):
        speed(0)
        circle(190-i,90)
        left(90)
        circle(90-i,90)
        left(9)

flower()
mainloop()