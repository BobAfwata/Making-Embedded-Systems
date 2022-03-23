LABKIT
=========================

A connected lab equipment for fun and data aquisition
-----------------------------------------------------

Labkit is a scientific projects that aims at bringing fun to sciences and lab sesssions ,As an engineer  or scientist taking hours in the lab wouldnt it be cool if your oscilloscope is fun, connected and can play jazz . Or what if your friend or fellow researcher needs the same data across the room. And what if the equipment can guide teenegers and upcoming scientist on how to carry the experiment.

Labkit is made with love for you 

## Architecture

The system is designed to be autonomous and easy to setup, requiring only a power supply. Dance venues don't always come with WiFi or good cellular service, but there is usually enough power for sound and lights. Given that, power consumption of the system is not a consideration.

![Software Component Diagram](assets/software-component-diagram.png)

The heart of the system is the Lightning Controller, which takes audio input, uses the DSP and ML libraries to get all the necessary information to produce a lighting scene, which it can then output onto LED strips using the Rendering component.

![Hierarchy of Control Diagram](assets/hierarchy-of-control-diagram.png)
