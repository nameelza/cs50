Week 2 Arrays
Week 3 Algorithms
Week 4 Memory
Week 5 Data Structures
Week 6 Python
Week 7 SQL
Week 8 HTML, CSS, JavaScript
Week 9 Flask
Week 10 Ethics
Security
Artificial Intelligence
Final Project
Academic Honesty
CS50 Certificate
FAQs
Gradebook
Staff
Syllabus
Ed Discussion for Q&A
Quick Start Guide
edX
YouTube
CS50 IDE
CSS Tutorial
Flask Quickstart
HTML Tutorial
Jinja Template Designer Documentation
Manual Pages
Python Documentation
Scratch
SQL Tutorial
Style Guide
Changelog
Status Page
Communities
Discord Q&A
Ed Q&A
Facebook Group Q&A
Facebook Page
GitHub
Gitter Q&A
Instagram
LinkedIn Group
LinkedIn Page
Medium
Quora
Reddit Q&A
Slack Q&A
Snapchat
SoundCloud
Stack Exchange Q&A
Twitter
YouTube
Harvard Shop
License
Mario
World 1-1
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.
screenshot of Mario jumping over adjacent pyramids
Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.
####  ####
The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.
Here’s how the program might work if the user inputs 8 when prompted:
$ ./mario
Height: 8
########  ########
Here’s how the program might work if the user inputs 4 when prompted:
$ ./mario
Height: 4
####  ####
Here’s how the program might work if the user inputs 2 when prompted:
$ ./mario
Height: 2
##  ##
And here’s how the program might work if the user inputs 1 when prompted:
$ ./mario
Height: 1
#  #
If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
####  ####
Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.
Create a new directory (i.e., folder) called mario inside of your pset1 directory, by executing
~/ $ mkdir ~/pset1/mario~/ $ mkdir ~/pset1/mario
~/ $ mkdir ~/pset1/mario
cd pset1/mariomore
touch mario.c
clear
make mario
./mario
make mario
./mario
make mario
./mario
make mario
./mario
make mario
./mario
make mario
./mario
check50 cs50/problems/2021/x/mario/more
style50 mario.c
make mario
submit50 cs50/problems/2021/x/mario/more
cd
git add .
git commit -m "mario more"
git push -u origin master
clear
cd pseit1
cd pset1
mkdir cash
cd cash
touch cash.c
cd pset1/cash
make cash
cd pset1/cash
make cash
./cash
make cash
./cash
make cash
./cash
make cash
./cash
make cash
help50 make cash
make cash
help50 make cash
make cash
./cash
make cash
./cash
make cash
./cash
make cash
./cash
check50 cs50/problems/2021/x/cash
make cash
./cash
make cash
./cash
check50 cs50/problems/2021/x/cash
style50 cash.c
submit50 cs50/problems/2021/x/cash
cd
git add .
git commit -m "cash final"
git push -u origin master
mkdir pset1/credit
cd pset1/credit
touch credit.c
make credit
./ credit
./credit
cd pset1/credit
make credit
cd pset1/credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
5105105105105100
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
check50 cs50/problems/2021/x/credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
check50 cs50/problems/2021/x/credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
check50 cs50/problems/2021/x/credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
5555555555554444
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
make credit
./credit
check50 cs50/problems/2021/x/credit
make credit
style50 credit.c
make credit
style50 credit.c
submit50 cs50/problems/2021/x/credit
cs
cd
git add .
git commit -m "credit final"
git push -u origin master
clear
cd week2lecture
make functionprototype
./ functionprototype
./functionprototype
cd
git add .
git commit -m "Function prototype added"
git push -u origin master
cd week2lecture
make scores
./scores
cd
git add .
git commit -m "Scores first"
git push -u origin master
cd
git add .
git commit -m "Scores first"
git push -u origin master
make scores
cd week2lecture
make scores
cd
git add .
git commit -m "Scores first"
git push -u origin master
cd week2lecture
make scores
help50 make scores
make scores
help50 make scores
make scores
./scores
make scores
./scores
make scores
./scores
cd
git add .
git commit -m "Scores final"
git push -u origin master
cd week2lecture
make scores
./scores
git add .
make scores
./scores
make ASCII_HI
./ASCII_HI
CD
cd
git add .
git commit -m "ASCII char hi! to integer"
git push -u origin master
git add .
git commit -m "ASCII char hi! to integer"
git push -u origin master
cd week2lecture
make ASCII_HI
./ASCII_HI
make ASCII_HI
./ASCII_HI
make ASCII_HI
./ASCII_HI
cd
git add .
git commit -m "ASCII final"
git push -u origin master
git branch
git checkout main
git commit -m "bash"
git checkout -f master
git pull
cd week2lecture
make string
./string
make string
./string
cd
git add .
git commit -m "string array"
git push -u origin master
git pull
git push --force master
git push --force origin master
git add .
git commit -m "test commit"
git push -u origin master
cd week2lecture
make uppercase
help50 makeuppercase
help50 make uppercase
make uppercase
./uppercase
make uppercase
./uppercase
make uppercase
./uppercase
cd
git add .
git commit -m "touppercase"
git push -u origin master
clear
cd week2lecture
make argv
./argv bear
make argv
./argv bear
make argv2
./argv bear
./argv2 bear
make argv2
./argv2 mom
./argv2 
./ argv2 my mom
./argv2 my mom
echo $?
cd
git add .
git commit -m "argc argv"
git push -u origin master
git add .
git commit -m "argc argv"
git push -u origin master
cd pset2
make scrabble
help50 make scrabble
make scrabble
help50 make scrabble
make scrabble
help50 make scrabble
make scrabble
help50 make scrabble
make scrabble
./scrabble
check50 cs50/labs/2021/x/scrabble
make scrabble
cd pset2
make scrabble
check50 cs50/labs/2021/x/scrabble
make scrabble
./scrabble
clear
make scrabble
check50 cs50/labs/2021/x/scrabble
style50 scrabble.c
submit50 cs50/labs/2021/x/scrabble
cd
git add .
git commit -m "scrabble project"
git push -u origin master
cd pset2/caesar
make caesar
./caesar 4 5
make caesar
./caesar 4
make caesar
./caesar 4
make caesar
./caesar 4
./caesar r
make caesar
./caesar r
cd pset2/caesar
make caesar
make caesar 3
help50 make caesar
make caesar 3
help50 make caesar
make caesar 3
./caesar 3
make caesar
help50 make caesar
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
debug50 ./caesar 5
make caesar
debug50 ./caesar 5
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
make caesar
./caesar 3
./caesar s
git add .
cd
git add .
git commit - "caesar project start"
git commit -m "caesar project start"
git push -u origin master
cd pset2/caesar
./caesar s
./caesar 3
make caesar
./caesar 3
cd pset2/caesar
make caesar
help50 make caesar
make caesar
./caesar 3
./caesar t
./caesar 2
debug50 ./caesar
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
help50 make caesar
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
make caesar
./caesar 2
check50 cs50/problems/2021/x/caesar
make caesar
./caesar 2
check50 cs50/problems/2021/x/caesar
style50 caesar.c
submit50 cs50/problems/2021/x/caesar
cd
git add .
git commit -m "caesar project final"
git push -u origin master
