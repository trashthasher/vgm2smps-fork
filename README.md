# vgm2smps

A tool that converts VGM to SMPS (Sonic 1) that was made to help you port music from other games or from your own VGMs.

## Features
  - Easy to use.
  
  
  - DAC sequence detecting (only for optimized VGMs with data banks, e.g. DefleMask, SMPSPlay exports).
  
  
  - DAC exporting.
  
  
  - Ability to choose exported channels, song start offset, and its length.
  
  
  - Ability to set parsing speed in FPS.
  
  
  - Alternate "smart" instrument detecting mode; If the final notes frequency is lower than what SMPS supports, all notes get transported up an octave, but instrument settings are modified to transpose down.


## Known bugs
  - Sometimes (but rarely) notes may be wrong (frequencies). 
  
  
  - Sometimes notes are wrong if -altins is used. 
  
  
  - Sometimes (but rarely) notes length may be detected wrong.
