Project Genjutsu
================

`AJ Minich`_

August 2013

Overview
--------

This project aims to create a keyboard interface in space using the iPhone. The idea 
is similar to the `Virtual Keyboard`_, except it would appear entirely in the user's 
vision.

Based on Yoshimasa Niwa's fantastic `introduction to OpenCV on iOS`_.

.. _AJ Minich: http://ajminich.com/projects
.. _introduction to OpenCV on iOS: http://niw.at/articles/2009/03/14/using-opencv-on-iphone/en
.. _Virtual Keyboard: http://www.hammacher.com/Product/81759

Action Items
------------

The following are on my list of things to do:

* Skeleton-ize the hand to get finger and palm location points
* Draw keyboard and other interfaces in the background, behind the user's hand
* Glowing edge around hand -> cvFindContours and cvDrawContours
* Have app run detection in a constant loop; get rid of buttons
* Get provisioning/devPhone going: developer enrollment, provisioning instructions
