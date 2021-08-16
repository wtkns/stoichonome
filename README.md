

# Stoichonome Hardware Sequencing instrument

## Form Factor: 
**3u 84hp** 
self contained (semi modular, optional rack ears for eurorack)
expansion port for additional modules with patching options (CV, Midi)
sd card based storage
SCsynth audio generator 

## Basic Interface: 

### on back:
 - power port (eurorack power +/- 12v)
 - USB port for firmware updates
 - expansion port (for additional IO)

### on faceplate

 - power button
 - 3.5mm audio jack 
 - 16 encoders
 - 16 led rings
 - switch/led for 16/32 

#### lighted soft-latching buttons to select "programming" mode: 
	 - Voice
	 - Rhythm
	 - Pitch
	 - Velocity

#### lighted buttons for Patch actions
	 - Play/pause
	 - Store/Recall
	 - Delete
	 - Tempo
	 - Scale

#### lighted buttons for Track actions
	 - Pattern length
	 - Shuffle
	 - Euclidean
	 - Mute

## Concepts: 

 1. **Patch:** "song" consisting of 8/16 tracks, tempo, scale, can be stored and recalled later 
 2. **Track:** one "instrument" consisting of a voice and pattern
 3. **Voice:** 16 parameters describing how a track sounds
 4. **Pattern:** consisting of 16/32 beats and pattern length 
 5. **beat:** consists of gate, pitch, velocity, accent
 6. **gate:** whether or not the voice triggers on a beat
 7. **pitch:** fundamental frequency of a beat
 8. **velocity:** amplitude of a beat
 9. **accent:** number representing modulation of a beat (interpreted by the voice)
 10. **pattern length:** number of beats to play before looping
 11. **Tempo:** global clock for patch
 12. **Scale:** global set of pitch intervals for patch



## Storage: 

with built in EEPROM, can store 4 (512 Byte) Patches with 8 Tracks each.

### Patch: 8 tracks
**Storage Format:**

| Byte #  | Value   |    | Stores  | Notes  |
|---|---|---|---|---|
| 1 | Track mute   |   | 8 One bit values  | Track 1-8 mute  |
| 2-9  | Pan   |   | 8 8-bit values  | +/- 64 Left/Right  |




### Track 
**Storage Format:**
  
| Byte #  | Value   |    | Stores  | Notes  |
|---|---|---|---|---|
| 1-16 | Voice   |   | 16 8-bit values  |   |
| 17-32  | Velocity   |   | 16 8-bit values  |   |
| 33-64  | Pitch  |   | 16 16-bit values (7.9)  | 7 bits ( +/- 64 Semitones ) |
|  |  |   |   | 9 bits ( 1-512 bend-up ) |




## Use Cases:
**1. modify rhythm of a track pattern:** 

 - Push and hold rhythm programming button 
 - Push knob to select track to edit
 - Knob lights to indicate selected track
 - Release both knob and button
 - programming mode button stays lighted
 - each knob now represents one beat of the selected track adjust parameters: 
	 - push knob to toggle gate 
	 - turn knob to adjust accent 
	 - push and turn to adjust randomness
 - push lighted programming mode again to exit (each knob now represents one track)
 - *or* push a different mode to switch to display/edit a different mode of the same track.

  **2. modify velocity of a track pattern:** 
    
    a. Push and hold velocity programming button
    ...
    f. each knob now represents one beat of the selected track
    g. adjust parameters:
      turn knob to adjust velocity
      press and turn knob to adjust randomness
    h1. push lighted programming mode again to exit (each knob now represents one track) -or- 
    h2. push a different mode to switch to display/edit a different mode of the same track.

  **3. modify pitch of a track pattern:**

    a. Push and hold pitch programming button
    ...
    f. each knob now represents one beat of the selected track
    g. adjust parameters:
      turn knob to adjust pitch (in increments of scale)
      press and turn knob to adjust randomness
    h1. push lighted programming mode again to exit (each knob now represents one track) -or- 
    h2. push a different mode to switch to display/edit a different mode of the same track.

   *or: expert pattern programming mode

    Push to toggle gate
    Turn for velocity
    Push and turn for pitch 
    Maybe use color to differentiate

  **4. change patch pattern type:**

    a. toggle 16/32 switch:
      16 mode: every knob is a track (16 tracks)
        each track has 16 steps
      32 mode: every column is a track (8 tracks)
        each track has 32 steps
        row 1 is steps 1-16
        row 2 is steps 17-32
      in 16-mode, should still retain voice and pattern information for steps 17-32

  **5. modify a voice:**

    a. press and hold Voice mode button
    b. Push knob to select track to edit
    c. Knob lights to indicate selected track
    d. Release both knob and button
    e. programming mode button stays lighted
    f. each knob now represents one parameter of the voice of the selected track
    g. turn to knob 1 to choose waveform type: sin, square, fm, noise, grain, sample, vosim, kick, pluck, etc. 
       push & turn for preset or shuffled parameters
    h. other knobs might change depending on waveform but generically something like:
      k2 envelope shape/pitch shape ( staccato portamemto legato rising falling sustain )
      k3 thru k6 adsr 
      k7 low pass
      k8 hi pass (or turn for low pass, push and turn for high pass) 
         or push turn for slope or resonance, etc
      k9 effect ( reverb, delay, ring, etc)
      k10 effect depth or push turn 9 for depth
      k11 effect 2
      k12 effect 2 depth
      k13 fundamental
      k14 # chord voices 
      k15 detune
      k16 chord delay (arp)
    i1. push lighted programming mode again to exit (each knob now represents one track) -or- 
    i2. push a different mode to switch to display/edit a different mode of the same track.

  **6. store a patch (stores up to 256 patches)**

    a. press store button
    b. store button lights
    b. led rings light to indicate where patterns are already held. Dark leds are empty
    c. press knob 
    d. next empty space will blink.
    e. turn knob to select space
    f. press knob 
    g. LED will pulse colors.
    h. turn knob to select color
    i. press knob and "store" light will turn off
    j. LED rings are now back in Patch mode

**7. recall a patch**



## Accessibility: 
left/right handed, colorblind

---
notes:

In "euclidean" home mode, turn knob to increase decrease Euclidean split, or press and turn to bit shift left or right


