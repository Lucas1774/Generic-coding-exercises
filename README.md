THIS WAS A CODE GAME FOR A JOB APPLICATION.

## Context

I got asked to write these programs in a web application that was supposed to record my changes in the form. Unfortunately, the page didn't work properly in my web explorer (or maybe I was supposed to take thirty minutes for each), so I sent these files instead. I don't know yet if I got the job, but I'm underqualified, even though I did great here.

The whole thing took me easily three hours. I'm not sure if that was the intended span.

I like the job. It is very convenient for me location-wise, and if the stuff I have to write is half as fun as these, I will have a blast there. Fingers crossed, I'm gonna need to have them crossed tight.

## Robot

The program describes a room and a robot that can move in it. The room is renderable.

I wrote an executable too to test it. Ideally, I would've generated all possible vectors.

The first thing I noticed is that in order to easily describe the turning of the robot, the `Orientation` Enum should follow some order, so I could use math, similarly to that in my Rubik's cube programs.

The second thing I noticed, and probably last, was very interesting: if I iterate through the rows of the room when I render it, going south actually means "increasing height", so I had to change the function `forward` for the y-axis cases. Not for the x ones though.


## IP Address Detector

It takes a string and prints all the non-overlapped IP addresses in it. If there were any overlap it would only render the one that appears first.

I got mad stuck on a couple of points:
- First, I don't know exactly how to combine the work of strings and regex. I was trying to define a number using a string, because I was afraid that I couldn't concatenate regex to create a new one, and I knew I could concatenate strings. I gave up on that and defined the whole thing in a line.
- Second, the indexing of the characters of the original string to form substrings to analyze was a nightmare. I wanted to make a good job, so I wanted to check only when it was worth checking (strings with length [7 - 15]). The main issue though was that I thought the `substr()` method's second argument was supposed to be the index of the last character of the substring, as supposed to the total length

## Hour Formatter

This is a very simple program that takes a certain amount of seconds and returns the hours, seconds and minutes as one would have them used.

There is nothing else to say. I'm pretty sure I've done similar unit-dumping logic, maybe for days months and years instead of this. Yeah, that sounds right, on the calendar program probably.

