# Ladue CS Challenge 2.0 - Data Overload!

All the problems in this round were prepared by Anthony. I tried to make the problems generally easy, but they tend to be a bit more difficult than I expect. I did kind of get lazy by makign hard versions instead of completely new problems, and J was basically a joke.


## A

You can either do it yourself by hand, or paste it into an online prefix expression evaluator. They exist. You should get a final answer of 44.


## B

Let X = ABCDE_2, where A, B, ... are digits. The AND 11111 doesn't change anything, and the right side simplifies to 11111. So, all 32 5-bit strings work.


## C

One easy way is to run it through an online Lisp interpreter.


## D

To find outliers, first sort the input, then look at the first and last elements. It's pretty obvious than 300 is an outlier.


## E

kth nearest neighbors in this case is pretty easy to implement. You can sort all the points based on how close they are to 1729, the look at which label is the majority of the clossest 11.


## F

You can sort the input, then look at adjacent elements.


## G

A little bit tricky. One way is to plot all the points, and it's pretty apparent which one is the biggest outlier.

You can also calculate the distance from each point to the mean, and take the label of the point with the largest distance.


## H

Implementation might be a little bit hard, but this one is very similar to the 1D case.


## I

There's a slow way and a fast way. The slow way is simple: loop through all pairs, and it finishes in about 2 to 5 minutes depending on the implementation.

The fast way is to use a divide-and-conquer approach. It's a well known problem and there are lots of good resources about this problem on the web, for example, [this](https://www.tutorialspoint.com/Closest-Pair-of-Points-Problem).


## J

A troll problem. Try all the programming languages listed in the problem statement (there's only two) and you'll see that lisp works. All the other answers were lowercase, so that's an indication of the case that you should use for your answer.

