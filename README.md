# HKU RoboMaster Training
This is for the HKU RoboMaster Team training. Especially for the training of Automation. 

#### NOTE: In the following sections, whatever in the square brackets should be replaced by your specifications. 

## One. How to submit your assignment

### Step One: Create a new branch with your name, using underscore to replace space in your name. 

To create a branch, you just click the `branch:master` button and type the new branch name into the textbox. Click the button "Create a branch ..." under the textbox to confirm. Done! 

This branch is where you are going to submit your codes. 

**NEVER submit your assignment to the master branch. Otherwise, you may get a ZERO mark with no chance to argue. **

### Step Two: Clone the Repo to your local machine. 

To clone the repo, you simplyt click the button `clone or download`, click the button to the right of the URL to copy the URL. 

Then you should open your git bash application software, and type in: 

```sh
git clone [[THE COPIED URL]]
```
Press Enter. 

After everything is finished, type in
```sh
cd HKURoboMasterTraining
```
to enter the folder which contains the content of the repo you have just cloned.

Then fetch the branch you have just created and checkout to there to start your coding. 

```sh
git fetch origin [[YOUR BRANCH NAME]]
```

### Step Three: Use whatever you have learnt or searched for to finish the given tasks.

Try your best and we trust you has the very ability to finish them. 

### Step Four: add and commit

After each modification, remember to stage your work by `git add .` command. 

After a certain period of working, remember to create a commit with `git commit -m "[[BREIF INTRO]]"` command so that you keep a fresh historical recording of your hardworking. 

_This is essential since even if your code cannot work, this history can as well provide us with sufficient information of your devotion into the tasks. _

### Step Five: Push

```sh
git push
```
After you are convinced that all the tasks have been fulfilled, you can submit your commits by `git push`. Remember that GitHub is a platform for **opensource** project, which means your work is **exposed to all the others**. If you are not willing to do so, you can conduct the push by the deadline. 

* Do worry that this will make us thinking you are a deadline fighter, since all your working history is stored in the commit history so that we can track the exact time of your finishing the assignments. 
* Moreover, this may also become the first-hand proof of your overdue.
