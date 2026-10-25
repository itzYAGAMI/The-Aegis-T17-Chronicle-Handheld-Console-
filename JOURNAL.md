---
title: "The Aegis-T17 Chronicle"
author: "Slimer"
description: "Pocket-sized hand held gaming console"
created_at: "2026-10-10"
---

# 2026-10-25: Entry 28

**Total time spent: 2.3 hours**

- Created At: Oct 26, 2026

### Content
1.Verified and rechecked every file\
2.Wrote a bill of materials file including prices, quantity, links\
3.Wrote a complete new README.md with a little help of AI\
4.Uploaded all files in separate folders after exporting from their respective software\
![image.png](https://cdn.hackclub.com/01a174f4-d505-7a96-a106-a64d3dc60888/image.png)

This is the Final Journal Before Shipping

# 2026-10-25: Entry 27

**Total time spent: 1.2 hours**

- Created At: Oct 26, 2026

### Content

Okay.... I think I procrastinated after the last journal and it has been 2 months again :hs:...anyways this time I have decided to ship the project for now as it is usable and will later update it to properly complete it.

In this journal I merged the tamagotchi program I had written at the first from the fallout docs. It was a little problematic because that program was independent and had to make the functions follow the same structure like the other 3 games. Now it has been finally integrated in the main menu system. That is it for this journal. I think I will ship this project next.
![image.png](https://cdn.hackclub.com/01a1745c-4c64-7006-9122-20889f9f8a2a/image.png)

# 2026-10-10: Entry 26

**Total time spent: 1.1 hours**

- Created At: Aug 11, 2026

### Content

After nearly 2 months I am finally back. I got a little busy with my college admissions and stuff also I procrastinated doing this project a lot but today i have finally broken the barrier and started again.

Yeah I forgot what I had done especially because I am new to c++ so I re-read each line of my code and understood the things I had done before.

I found some bugs in my code and fixed them, like using a temporary variable I had created for testing in multiple places, which I replaced with the actual variables. Also I added the door for the next level. For now I have coded it to restart the level because I have not set the platforms for the next Level. Anyways all the game mechanics are finally complete. Only thing left is to design the next levels and the first one too, as the platforms in this are just for testing.

![image.png](https://cdn.hackclub.com/01a12482-1b45-7119-9e2c-8a8de93e2842/image.png)

# 2026-10-10: Entry 25

**Total time spent: 3.4 hours**

- Created At: Jun 20, 2026

### Content

This journal consists of the player movement engine. 

Hands down this is the most complex piece of code I have ever written. At first I learnt AABB collision detection in the dino and flappy bird game. This time the collision logic is much more complex. The name is AABB collision resolution. I understood properly how this works with some simulations. Next I built the logic for that. Ofc it didnt work and the player was falling through the ground. I also added two floating platforms but I couldnt even reach there cuz of the previous problem. 

After some debugging with the help of a clanker I finally fixed it and the player movement engine is finished. Next I have to design the levels which is definitely not going to be easy :fear: 

![image.png](https://cdn.hackclub.com/01a12480-29c0-7872-a02c-fedffa9f1342/image.png)The small white box is the player


### Recording Links

- https://lookout.hackclub.com/api/media/e39fcdbe-a362-48ab-87bb-81cc93389640/video.mp4

# 2026-10-10: Entry 24

**Total time spent: 3.5 hours**

- Created At: Jun 20, 2026

### Content

This journal consists of the Flappy Bird Game.

I found my new love, and its game development fr <33!!

First I asked for a outline to a clanker just for the initial steps because I was starting from a blank canvas again. I defined the global variables and defined all the structs.

Next I made the jumping logic which is slightly different from the dino game one. It also came to my mind that having a single pipe at once on the screen will be too easy for the player so I first added two pipes but that was very easy too so I added 3 pipes to the game. Brick by brick I developed the rest of the logic. 

This time I made my own collision logic too. I have learnt a lot from making these two games. This time I had to ask the clanker only 3 times in the entirety of the process and I wrote the complete code on my own. This really feels sooooo good. 

![image.png](https://cdn.hackclub.com/01a1247e-d5cf-7e78-ad82-2e72cba4ded7/image.png)This is how the game looks


![image.png](https://cdn.hackclub.com/01a1247f-11d1-7b64-bf99-2bdf0e6cfa4b/image.png)And this is the game over screen. That is it for this journal next journal I will add the tamagotchi game.


### Recording Links

- https://lookout.hackclub.com/api/media/f7e172ec-ba79-4783-8223-1c9967ce4056/video.mp4

# 2026-10-10: Entry 23

**Total time spent: 3.9 hours**

- Created At: Jun 20, 2026

### Content

This journal consists of the dino run game.

First I started off by building a simple prototype version which consists of one big cube and a small cube, the big cube was the dino and the small cube was the cactus. I implemented the AABB collision logic which I learnt from the clanker and it worked perfectly. 

Next I implemented a game over screen and a option to restart or continue to the main menu. 

After this I drew the actual sprites which were the dino and cactus from online references and inserted them into the game. And voila the game is ready. I made this sound easy but it was honestly difficult at first but I gradually became comfortable with the syntax and the c++ programming concepts and I like this now. 
![image.png](https://cdn.hackclub.com/01a1247d-c4b0-796a-9931-e9dd6a08c961/image.png) This is a screenshot of the game. 


![image.png](https://cdn.hackclub.com/01a1247d-f0ee-7cec-9548-8d06b3fd6e74/image.png) The game over screen. 

note to the reviewers: I have absolutely used no AI to write the code I have written all the code by myself. Also I have only used the AI to check my code for any bugs when I was at a dead end and couldnt solve it or I needed to learn a new concept or I needed to know how a specific thing is done or what is the better way of doing a thing. I will be giving a link to the chat I had with the AI in the last journal of this project.


### Recording Links

- https://lookout.hackclub.com/api/media/ce2859e0-a083-4ca6-acae-9dd627ab92ac/video.mp4

# 2026-10-10: Entry 22

**Total time spent: 3.2 hours**

- Created At: Jun 19, 2026

### Content

In this journal I have made the loading screen and the main menu screen of this console. 

I dont know any c++ but since I know java I found the original tamagotchi source code easy to read. 

I described my goal to a clanker and asked for the concepts I needed to learn and understood them. I was stuck at first in pointer and references but with some examples I understood it. After grasping some more concepts I made the loading screen and the main screen. 

The loading has animation too like this:-
![image.png](https://cdn.hackclub.com/01a1247c-ee56-70b4-bf11-3b9514106c67/image.png)(The loading bar fills up in 3 seconds)

![image.png](https://cdn.hackclub.com/01a1247d-16a5-7013-b6ad-b89dda0a0667/image.png)(This is the main menu screen which I can scroll though using the left and right button, I can select one of the games using the middle button)

### Recording Links

- https://lookout.hackclub.com/api/media/69c294c0-b5c6-4080-8d20-cfb4e34d3012/video.mp4

# 2026-10-10: Entry 21

**Total time spent: 2.8 hours**

- Created At: Jun 19, 2026

### Content

This journal consists of the process of making the zine. 

I started off with making the zine in Figma because the docs recommended that, but it was honestly difficult for me and would take too much time for that learning curve so I switched to Canva which is slightly more familiar to me. 

There isn't much to explain, I experimented with different text colors and fonts and slowly made the entire zine page. It is very satisfactory to me right now and I do not want to modify it any more. That is all for this journal. 
![THE_AEGIS-T17_CHRONICLE-.jpg](https://cdn.hackclub.com/01a1246e-1e02-7923-8bc5-d905ff5694db/THE_AEGIS-T17_CHRONICLE-.jpg)


### Recording Links

- https://lookout.hackclub.com/api/media/752d682f-7648-4c4f-a234-1de0998c32d7/video.mp4

# 2026-10-10: Entry 20

**Total time spent: 4.3 hours**

- Created At: Jun 18, 2026

### Content

This journal consists of the rendering part

I know 4 hours sound like a lot for a render but it really took that long. 

I searched through so many brass textures to find the right one, and none of them were looking good to me, some were too dull, some were too bright, some had so many scratches, some were too smooth and the list goes on. Honestly speaking the final render was not satisfactory to me but I honestly was at a dead end and couldnt think of any more ways to render it like how I imagined (I will paint it like I imagined i guess in the irl model). 

![image.png](https://cdn.hackclub.com/01a1245b-7233-78f0-b85a-8e5bb4e943a4/image.png)
![image.png](https://cdn.hackclub.com/01a1245b-b301-7d51-b409-fcad7b659579/image.png)
These are the renders I did and are honestly not very satisfactory to me but I wont waste time on this anymore and I am content right now. Just for comparison I have attached renders of my past projects:
![image.png](https://cdn.hackclub.com/01a1245c-0ade-70e7-9b6f-db075928c3c1/image.png)
![image.png](https://cdn.hackclub.com/01a1245c-24ed-70d7-b60c-8d389e377c76/image.png)
![image.png](https://cdn.hackclub.com/01a1245c-4486-7392-bdfc-6880b21878ce/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/f53883be-7cea-4b22-88b4-0ff78967cd3f/video.mp4

# 2026-10-10: Entry 19

**Total time spent: 1.1 hours**

- Created At: Jun 17, 2026

### Content

This journal consists of some random things I did. 

First of all I wanted to test out the code but I dont have any hardware with me so I cant test that physically. I asked a clanker how I can do that and came to know about wokwi. 

I setup the board and the libraries there and changed the code slightly because there is no xiao esp32c3 there, only the generic esp32c3. After that I ran the code and saw the tamagotchi come to life. To be honest it seemed quite boring to me. So I thought to add more games to this like a platformer, dino run(like chrome dino) and maybe flappy bird too. I asked a roadmap to the clanker for what things I have to learn. 
![image.png](https://cdn.hackclub.com/01a1245a-b520-7c9c-b051-2048e942e4f1/image.png)


After this I started reading the docs for the zine page and browsed some previously made zine pages by other hackclubbers. That is it for this journal.


### Recording Links

- https://lookout.hackclub.com/api/media/880020bc-720f-4360-87bb-b2a6f82d6809/video.mp4

# 2026-10-10: Entry 18

**Total time spent: 1.5 hours**

- Created At: Jun 17, 2026

### Content

This journal is just following the firmware tutorial.

I installed the arduino ide prior to starting the lookout recording. After that I followed the firmware docs and read every line and understood how the program works, side by side I also copied and pasted the code to the ide like the doc has mentioned in it. 

These are the pins which I mapped according to my pcb tracing:-
![image.png](https://cdn.hackclub.com/01a12459-decc-7a5e-8f6f-b4b281d741dd/image.png)
![image.png](https://cdn.hackclub.com/01a12459-ff2f-7c4d-982d-75eb942457b3/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/baae65ef-c2a7-43a6-b8a0-ae330da1a505/video.mp4

# 2026-10-10: Entry 17

**Total time spent: 1.1 hours**

- Created At: Jun 17, 2026

### Content

This journal consists of some final touches I gave to the model.

At first I added two rings to the outer wall, I will use this to attach a tension spring, this is just for aesthetics for the steampunk theme. 

After this I started checking the design for any intersections. And obviously I found one :sob-pray: . Because I had expanded the battery compartment in the last journal, now this compartment is intersecting with the annular joint and if left like that would lead to the model not fitting together at all, so I fixed that by cutting the intersecting region of the annular joint. 

After fixing this I checked the whole model again using section analysis and didnt find anymore problems. 

Next I exported the model in a slicer and printed the model. To my absolute surprise IT WORKS PERFECTLY, every joint, the battery cover I made, the middle support beam, everything. I am soooo HAPPY. The only problem is that the button caps I made are too small and is not printing correctly, so I will fix that later. 

![image.png](https://cdn.hackclub.com/01a12456-2cb8-7a3d-8767-172b39f4ad72/image.png)
![image.png](https://cdn.hackclub.com/01a12456-55e9-72fb-a916-f152612f2c94/image.png)
![image.png](https://cdn.hackclub.com/01a12456-824b-7124-8c60-81453082ac73/image.png)
![image.png](https://cdn.hackclub.com/01a12456-b402-7e92-b9d8-a174ab6b4599/image.png)
![image.png](https://cdn.hackclub.com/01a12456-da8a-73c9-8545-706e870f3b79/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/fdd3291a-482f-47c5-9b46-a93bc3813d4b/video.mp4

# 2026-10-10: Entry 16

**Total time spent: 3.2 hours**

- Created At: Jun 16, 2026

### Content

This journal consists of me fixing some major blunders and the battery cover for the battery compartment. 

First I created a rectangular cutout on the walls on the battery compartment which allow the wires to pass through and connect with the battery connector. 

After this I made a small support structure on all the walls which would keep the battery cover level. 

4-5 minutes I realized a major blunder I made and I became so angry. Somehow in the process of making The bottom cover with the voronoi design had merged with the top walls and the annular joints and It became just one body. Now this is easy to fix normally where I can just delete the feature from the timeline where it had combined. The problem here was that there was no such combine feature in the timeline and I completely lost it there.

I checked the previous journal and confirmed that it had not merged at that time, so it must have been after that. I started undoing and found the spot where it had combined. It was when I was extruding the support structure on the wall and one extrusion somehow made both bodies combine and I have no idea how. So I edited that feature and just clicked ok without changing anything and all the work I had done after the extrusion was gone and that dealt the final blow on me :sob-spin: . I had nearly ragequitted but then I got a little motivation somehow and redid the whole thing again with better technique and efficiency this time.

After this I saw another blunder I had made before which I hadnt notices somehow. The oled screen was intersecting with the top plate. I fixed this by cutting bits of from the underside of the top plate and it seemed good now. After doing this I did a thorough check on the whole design if I had any more blunders left :sob: 

![image.png](https://cdn.hackclub.com/01a12454-fa9a-7fe4-9bf0-aa2dc199759b/image.png)

After this I moved on to making the battery cover. First I made the U shaped snap fit joint which is usually found on the bottom side of rc cars or any remotes. After making this I realised another blunder(holy shit I have made so many mistakes), the U shaped joint was taking too much space and the battery wouldnt fit in the compartment I made. So I deleted one of the walls and the supports and made it even bigger than before. I redid the supports of the wall again and made the battery cover and merged it with the u shaped joint. And finally it is over. 
![image.png](https://cdn.hackclub.com/01a12455-2deb-75be-a0b2-28d722acc457/image.png)
As a last check I exported all the case parts to bambu studio and sliced everything to check if everything would print okay and I found no problems. I have one last thing I want to do in the next journal and that is to attach the top plate using snap fit joint too instead of screws and mounting holes. This will make the entire design 3d printable and assembly much easier and that much easy to disassemble too. That is it for this journal. 

### Recording Links

- https://lookout.hackclub.com/api/media/db8b5d68-a6c6-4651-92ab-dd102682bb0c/video.mp4

# 2026-10-10: Entry 15

**Total time spent: 2.2 hours**

- Created At: Jun 15, 2026

### Content

This journal consists of redesigning the locking mechanism of the case and a cool voronoi back cover. 

First problem I faced was I had to mirror the annular joint I created before to the other side of the wall and delete the original one too. I tried mirroring it using a midplane but when I deleted the original one, the mirrored one vanished too. Next I brainstormed for some time and thought instead of mirroring the complete joint, I will mirror the sketch of the joint but sketches cant be mirrored. So I edited the sketch itself and mirrored it within the sketch. After this I deleted all the remains of the previous annular joint and combined the bottom and top wall piece together to form just one. I left the sketch there for now because I will be making the joint later.

Now onto the next problem, I had to design a way for the pcb to go in to the case without the usb port of the xiao port getting obstructed. After some brainstorming again I thought of a method and this included creating a small dovetail joint for the part of the case above the usb which can be removed and then fixed again after the pcb is inserted into the case. I designed and it looks like this 


![image.png](https://cdn.hackclub.com/01a12451-aed6-7edf-942b-904bd932c840/image.png)

After this I made a beam through the wall which will hold the pcb else the pcb will just fall down when it is upright. It looks like this, also I did not make any locking mechanism for this because the tolerance itself will lock the piece steady in it. 

![image.png](https://cdn.hackclub.com/01a12451-dc20-71c8-935a-764927639666/image.png)

Next I created the annular joint on the other side using this mirrored sketch. This joint is going to be used for attaching the bottom cover. After this I made the walls of the back cover. Last thing left is the back plate. 

I had a cool idea of making the bottom plate have a voronoi design and the battery will be inserted in between like the ones in remote controlled toys. So I made this voronoi design using an online tool and exported it as an svg and imported that in fusion to create the backplate and it looks so freaking cool.
![image.png](https://cdn.hackclub.com/01a12451-ffef-7403-80b4-cd4aaba49647/image.png)
Last thing I did is making a rectangular hole in this voronoi design and made a compartment for storing the battery. 

![image.png](https://cdn.hackclub.com/01a12453-eed0-78a1-a4a7-f633d0fc2bc9/image.png)
Next journal I will hopefully finish my case design with some final things I have left to do.

### Recording Links

- https://lookout.hackclub.com/api/media/9a0bb14c-e270-4fa2-a589-46d241474519/video.mp4

# 2026-10-10: Entry 14

**Total time spent: 1.3 hours**

- Created At: Jun 14, 2026

### Content

This journal consists of me failing at very step :sob-spin:

In the last journal I had imported a model of a compass, to put as a place holder. So i thought if there is any way to convert mesh to normal bodies and found that in fact exists (I didn't know this because I have hardly interacted with meshes before). However the prismatic version is only for professional licenses and I dont have that. So I did the normal option and it created so many faces that it nearly crashed my computer. I tried removing this feature from the timeline and doing that nearly crashed the computer again. After this I left the idea of cnnverting to normal bodies and just moved and resized the mesh compass to fit in the hole I made for the compass. 

After this I started on the bottom side of the case where the battery will go. I thought of making a separate compartment for it which is similar to the ones present in remotes for electronic devices. Now after thinking about the design and some checking the dimensions, I did a section analysis and saw a massive blunder. The annular joint I made in the last journal was intersecting with the pcb and I tried moving it a little up but that ended in failure. Basically I have to completely remove the annular joint and rethink my design completely. This sucks fr
![image.png](https://cdn.hackclub.com/01a12448-9e4a-7561-925c-041f86da2604/image.png)
This gives pain fr

### Recording Links

- https://lookout.hackclub.com/api/media/10fcee3a-63da-4b35-863f-61ca647cdc82/video.mp4

# 2026-10-10: Entry 13

**Total time spent: 1.1 hours**

- Created At: Jun 12, 2026

### Content

This journal consists of some changes I made to the model which will make assembly easier and also look and feel better. 

First I split the case in half along the line of the usb port because there was no other way it could be assembled cuz the usb was protruding out of the circle a little. Next I learnt how to make snap fit joints for a circular wall and made that in my design.
![image.png](https://cdn.hackclub.com/01a12447-9c1c-7622-bfa7-630620169b8c/image.png)


Next I saw the buttons and remembered that tamagotchi buttons have are a little spherical at the top, so I did that with the buttons in my design too and now it looks good. 
![image.png](https://cdn.hackclub.com/01a12447-b8c0-7174-8d37-0de65ccc07aa/image.png)


note to the reviewers: If you are thinking how I am good at CAD but dont know any hardware, its cuz I did #construct before and learnt CAD from there :pf:


### Recording Links

- https://lookout.hackclub.com/api/media/70861613-9d83-4292-8152-6e338becc490/video.mp4

# 2026-10-10: Entry 12

**Total time spent: 1.5 hours**

- Created At: Jun 12, 2026

### Content

In this journal I have made the top part or the lid of the case.

I added a circular wall to the oled rectangle cuz that looked better and then added a gear and trimmed off the edges to give a more steampunk theme. I also made hole for putting a small button compass and that would look so cool and add to that vibe too. 

Now I realised the main problem. The switches were too small in height for the player to be able to reach those from the top. So I pulled up how actual keycaps work and created a keycap for the switches. This idea mainly came to me because I had done #resolution-design but only week 1 :pf: and then I copied the 'switchcaps' to the other switches too and it looks nice now.

![image.png](https://cdn.hackclub.com/01a12446-e95f-7567-9b2a-04307e60e784/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/f96df62a-ae6e-47ec-8d3e-2afc1b2d16ac/video.mp4

# 2026-10-10: Entry 11

**Total time spent: 1.1 hours**

- Created At: Jun 11, 2026

### Content

This journal mainly consists of me brainstorming how to fit the pcb in the case after soldering.

At first I cut out a hole for the usb of the xiao board and also the corners of the xiao board were intersecting with the walls so I made a rail kind of thing so it doesnt anymore. After that I decided that I will insert the pcb from below while assembly so I made a catch for the pcb on top where it can rest temporarily for me to put the screws. I had also forgotten to add mounting screws on the pcb so I did that in kicad and imported another model and removed the previous ones. This is what I made. 

![image.png](https://cdn.hackclub.com/01a12446-2200-7793-88bd-63d13dd97079/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/8ae967fb-7140-46c5-be71-3fda8094ed60/video.mp4

# 2026-10-10: Entry 10

**Total time spent: 1.1 hours**

- Created At: Jun 10, 2026

### Content

In this journal I have not done anything major, I thought of a rough idea of how the case will look and then proceeded to make a sketch of the perimeter and also offset that to get a wall but I realised that the usb of the xiao is pointing out too so I will have to design it a little differently. I kept the sketch for now. 

Putting that aside I asked a clanker what battery I need to use and then I came to know the things about lipo battery but I couldnt find a 3d model with the dimensions of the 400mah lipo battery which I will buy online. So I imported a model of similar dimensions and made a cube with approximate of the actual battery I will buy keeping the imported model as a reference. And then I made the battery model, its very simple and will do the work hopefully. That is it for this journal. 

![image.png](https://cdn.hackclub.com/01a12445-296f-7550-8cb3-07002cd7fe15/image.png)
![image.png](https://cdn.hackclub.com/01a12445-45ed-7f69-af2c-e9ac7f9a3c84/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/e7189459-aa07-4e9b-8c01-a99e85f504b0/video.mp4

# 2026-10-10: Entry 9

**Total time spent: 1.1 hours**

- Created At: Jun 9, 2026

### Content

The work I did in this journal is actually insignificant and very minor but the confusions I had were massive, although I learnt many things.

All I have done is put header pins on the oled and xiao mcu but there were so many problems. 

First problem is that the mounting holes on the oled when aligned with holes on pcb, do not align the pin holes because the model and footprint are a little off, I think it wont be a problem irl and is just a fault of the model but idk havent fixed this yet.

Secondly when I aligned the header pins on the xiao mcu I saw that the pins were bigger than the holes on the mcu and that just made me paranoid. I checked tanishq's onshape file and found the same problem there too. I was hoping that the xiao model was wrong but that was correct too. Ultimately I asked for help to cwc and came to know it fits irl. After all this and some back and forth with a clanker I realised that the fault was with the header pin model itself and the pins had a side of 0.67mm instead of 0.64mm :loll: . Anyways I also noticed a major flaw that the holes on the pcb were 0.889mm and that wouldnt perfectly fit the header pins because the the diagonal would be 0.9mm so I changed all of the holes to 1mm and the copper pads to 1.7mm in the pcb editor. 
![image.png](https://cdn.hackclub.com/01a12442-e428-7b70-a405-4148332f5a02/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/2e8cff50-c3be-42a7-b51b-0cd986deae9f/video.mp4

# 2026-10-10: Entry 8

**Total time spent: 0.5 hours**

- Created At: Jun 9, 2026

### Content

This was mostly a final touch up to the pcb incase I missed anything.

What i did here was add another ground plane on b.cu cause the xiao was gonna be on the back side and the buzzer too. Also I verified that I had connected each pin correctly or not.

Finally I exported the model as a step file and imported it onto Fusion 360 and saw the model closely and aligned the oled screen to the holes a little better. Also yeah Fusion >>> Onshape 
![image.png](https://cdn.hackclub.com/01a12441-f0c6-7d35-b706-c487854a93cf/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/5fca4599-06eb-4a00-8f30-d45aed62fbcd/video.mp4

# 2026-10-10: Entry 7

**Total time spent: 1.2 hours**

- Created At: Jun 8, 2026

### Content

This journal consists of some very confusing things :loll:

I noticed while viewing the cad linked in the fallout tamagotchi made by Tanishq. I saw that the battery connector was connected to two pads named as VBAT and GND. But these vbat and gnd pins arent connected to anything else so essentially the mcu isnt powered at all. This wasnt even the main problem, the bigger problem was the battery connector +BAT pin in my pcb wasnt even connected to anything let alone a vbat pad. 

So yeah I asked all this to a clanker because I was so confused and the clanker said that the schematic made by Tanishq is perhaps wrong as the battery isnt connected to anything and the mcu can only be powered when a type c cable is connected to it. Next it also told me that because of the different pin numbers on my schematic and pcb footprint the bat pin wasnt connected to the mcu. So i modified the schematic and updated the pcb from that. Also added some vias to solder the belly flat pins on the pcb from the other side(recommended by the clanker.)

That is it for this journal :pf:
![image.png](https://cdn.hackclub.com/01a12441-26fd-771f-81f8-5a483b856426/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/3ad0d06e-8318-45ae-8c11-a6ce8e25d6fe/video.mp4

# 2026-10-10: Entry 6

**Total time spent: 0.5 hours**

- Created At: Jun 8, 2026

### Content

This journal consists of me uploading the gerber files to github and checking for pcb prices.

At first I created a new repo and exported the gerber files from kicad and uploaded them to github.

Next I zipped the gerber files and uploaded it to various different sites and checked their pricing. The least I could get it manufactured in India was like 8.5$ but manufacturing in china costs very less but shipping costs are way to high. Will probably order from robu.in and that is it for this journal.
![image.png](https://cdn.hackclub.com/01a1243f-e29f-73ce-a539-f9759a490b43/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/9e29b7a2-04cd-4402-91c3-c2a784b5c572/video.mp4

# 2026-10-10: Entry 5

**Total time spent: 1.7 hours**

- Created At: Jun 7, 2026

### Content

In this journal I have fixed all the DRC errors and made the board much better than before. 

First I gave screenshots of all the DRC errors to a clanker because none of the errors were mentioned in the tamagotchi docs and I didnt know any of it too :pf: 

I saw in the image given in the docs that the oled was infront and at the back there was the buzzer, also the switch was infront and the mcu was at the back, but that caused no problem. However in my case this was giving an error, so I had to rearrange everything to make that error go away and my routing was looking very bad too. So I deleted all of the routings and rearranged all of my components. This time I added a ground plane too, which I had read of in the docs. Also this time the routing looks so much better too. I fixed the other minor errors, and the DRC errors are gone now. Only some 20 warnings are present but I confirmed that from a clanker that I can safely ignore those warnings because it wont affect the manufacturing process. 
![image.png](https://cdn.hackclub.com/01a1243e-b0a4-7a54-9777-194e87c35323/image.png)
![image.png](https://cdn.hackclub.com/01a1243e-fb82-7610-8f76-287d407a606b/image.png)
![image.png](https://cdn.hackclub.com/01a1243f-1d46-7aaa-a1a3-67f9a546681d/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/72beaef2-4331-4f07-abd1-b582debaba15/video.mp4

# 2026-10-10: Entry 4

**Total time spent: 1.1 hours**

- Created At: Jun 6, 2026

### Content

This journal includes the routing and adding the silkscreen art.

First I started routing the board as normal and had no problems. I will admit my routing does not look good at all especially compared to the one given in the Fallout docs but I managed hopefully and it will work. 

After this I decided to add a silkscreen art (no ofc not made by me, I am terrible at drawing.) First I added a text by following the doc instructions and wrote "The ONE PIECE is REAL!!!" yeah I am a hardcore one piece fan. Next I decided to add the jolly roger of the straw hat pirates however I could not understand how to add that by reading the docs so I asked a clanker, yeah :pf: . I still couldnt understand because the clanker was saying stuff which was in older versions of kicad and I kept getting confused. Also when I tried to save in the image converter in kicad, there was this weird windows glitch where it was thinking I was trying to open a file instead of saving and saying that file does not exist. After some back and forth with the clanker I finally managed to add the silkscreen. 

I felt so good that I finished the pcb and saw it in 3d and it looked nice too. After this I checked DRC and ofc there are a bunch of errors which I have no clue about rahhhhh. Well that will be part of the next journal :pf: 
![image.png](https://cdn.hackclub.com/01a1243d-c730-7c96-88c1-c916097e58fc/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/48383e2d-f6a2-4b2f-99a8-1340ae446f82/video.mp4

# 2026-10-10: Entry 3

**Total time spent: 1.6 hours**

- Created At: Jun 5, 2026

### Content

In this journal I created the PCB, but not the tracing. 

At first I opened the pcb from the schematic editor using the button and then I read the docs which said it should now show all the components arranged like that image. And my editor was empty :skull: . I immediately started checking everything I had done in the schematic editor and crosschecked everything and the footprints directories too. Then I asked a clanker and found I had to press the update pcb from schematic button first :hs: which was also written just below that image in the docs and I had not read that. 

After this only half of the components loaded and the xiao chip, oled and buzzer did not load. I again checked the assign footprints menu and saw no problems and I had assigned everything correctly. Then I noticed all of them were imported from easyeda and the ones native to kicad had loaded properly. So I asked this problem to a clanker and found out that I had not assigned the library type to kicad in the manage footprints menu :hs: . After I did that everything loaded properly. 

My idea for this project is to not make it like a normal Tamagotchi but to redesign it and give it a more retro look. For this I only needed a circular pcb instead of the egg shaped pcb so I made that after some help from a clanker again :pf: cuz I was confused about the front and back layer component placement. 

And after I finally i would be able to route the pcb now, only to find out that the oled and xiao mcu did not load in the 3d viewer. Yeah a clanker again and I saw that the directory for the oled was showing correctly and was even pointing to the correct 3d model but it was still not loading, so I made another row and added that manually from the easyeda2kicad folder. The problem was with the xiao mcu, there was no 3d model in my computer. And it was pointing to a directory which did not even exist. So I downloaded the 3d model from the seeed studio resources page which was linked initially in the tutorial. And after doing this I manually changed the placement of the model on the pcb so it was on top of the holes correctly, same for the oled too. And finally all of the models loaded correctly in the 3d viewer.

Finally I followed the doc and manually changed the pin numbers on the xiao mcu like the image given in the docs. And that is it for this journal. 
![image.png](https://cdn.hackclub.com/01a1243c-8538-77db-9e9c-9915e0b0f423/image.png)
![image.png](https://cdn.hackclub.com/01a1243c-bc4c-7c1d-8f87-77240ab7b0b9/image.png)
![image.png](https://cdn.hackclub.com/01a1243c-e06d-7cb4-94e5-3c0302d3a2f9/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/05030cd3-eae6-4318-b852-a58e71331acd/video.mp4

# 2026-10-10: Entry 2

**Total time spent: 2 hours**

- Created At: Jun 3, 2026

### Content

This journal consists of assigning footprints. 

First I started with the battery connector and got to know about to it (yes I am an absolute beginner to hardware and this is my first project :pf: ).

Next I started with the buzzer. Here i faced a problem that the tutorial specifies the buzzer from aliexpress but that doesnt deliver in India, so I had to source from robu.in but this had different specifications. So with the help of a clanker I found it in robu and then after much research and learning how to source parts on LCSC i found a similar buzzer there too and imported it. 

Next I did the same thing with 0.96" oled. There was a problem I was facing that the two listings on LCSC with the oled i found on robu did not have footprints or 3d models. So after a bit of thinking I understood that the chip doesnot matter for the footprints and 3d models and confirmed that from a clanker. At last I saw that the oled mentioned on the tutorial had the same specifications like the one on robu and just with a upgraded chip. So that worked fine and I imported that. 

Finally I did the same with the switches too which were 6x6x5 mm but again the one on lcsc did not have footprints or 3d models. And there was no alternative too. So i took help from a clanker and found out that kicad has a built in library containing that switch so I used that instead of importing 4mm switches as mentioned on the tamagotchi tutorial.

Finally I finished assigning the footprint and that is it for this journal. Next journal I will be creating the pcb. 

![image.png](https://cdn.hackclub.com/01a1243b-72c7-7800-a2e8-ca9e632b6873/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/ce7a6070-98b3-4acb-b531-eb861c200d1f/video.mp4
- https://lookout.hackclub.com/api/media/a1ac33ec-8dce-4235-8461-9b3e81f80946/video.mp4

# 2026-10-10: Entry 1

**Total time spent: 2.1 hours**

- Created At: May 30, 2026

### Content

I am an absolute beginner to hardware and this is my first hardware project. I decided to follow the Tamagotchi starter guide as it seemed appealing to me. 

First I started reading the docs (I had installed kicad prior to this), and then I learned what a MCU is. I could not find the xiao kicad footprints in the seeed studio wiki cuz it was so much below and I was getting confused, after asking a clanker, I was even more confused and somehow found it after scrolling through the page multiple times and I downloaded it. 

Next I got to know how to use easyeda2kicad which took some time and some back and forth with a clanker :sob: (I feel so good after learning these lmao).

After this I added the 0.96'' OLED display and connected it to the MCU. 

Next I learnt what I2C communication is and what are SDA and SCL and how it works and also the pullup resistors. I also kind of tried to understand the DC chart in the oled datasheet and understood it partly. After this I added the buttons and the buzzer and the battery. This concludes the schematic part of this project and this journal. 
![image.png](https://cdn.hackclub.com/01a1243a-616a-7c76-a201-b7f79c0fa4de/image.png)
This is a screenshot of the schematic I made. 

Pss: idk why but most images in the tamagotchi docs pages are not showing up for me and also not loading, good thing i had archived the docs page before and that has those images


### Recording Links

- https://lookout.hackclub.com/api/media/88191598-4520-4691-a8a6-f71b9dfc4c7a/video.mp4
- https://lookout.hackclub.com/api/media/af95ce28-2d5c-4f06-aca4-9746a5cc5d2b/video.mp4

