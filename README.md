THIS WAS A CODE GAME FOR A JOB APPLICATION.

## Program

I got asked to write these classes in a web application that was supposed to record my changes in the form. Unfortunately, the page didn't work properly, so I sent this file instead. I don't know yet if I got the job, but I'm underqualified, even though I did a great job here.

The program describes a room and a robot that can move in it. The room is renderizable.

I wrote an executable too to test it. Ideally, I would've generated all possible vectors.

The first thing I noticed is that in order to easily describe the turning of the robot, the `Orientation` Enum should follow some order, so I could use math, similarly to in my Rubik's cube programs.

The second thing I noticed, and probably last, was very interesting: if I iterate through the rows of the room when I render it, going south actually means "increasing height", so I had to change the function `forward` for the y-axis cases. Not for the x ones though.

I liked the job a lot. It was very convenient for me location-wise, and if the stuff I had to write is half as fun as this little program, I would have a blast there. Fingers crossed.