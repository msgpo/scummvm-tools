/***************************************************************************
 gm_patches.c Copyright (C) 2000 Rickard Lind


 This program may be modified and copied freely according to the terms of
 the GNU general public license (GPL), as long as the above copyright
 notice and the licensing information contained herein are preserved.

 Please refer to www.gnu.org for licensing details.

 This work is provided AS IS, without warranty of any kind, expressed or
 implied, including but not limited to the warranties of merchantibility,
 noninfringement, and fitness for a specific purpose. The author will not
 be held liable for any damage caused by this work or derivatives of it.

 By using this source code, you agree to the licensing terms as stated
 above.

***************************************************************************/

char *GM_Patch[128] = {
/*000*/ "Acoustic Grand Piano",
/*001*/ "Bright Acoustic Piano",
/*002*/ "Electric Grand Piano",
/*003*/ "Honky-tonk Piano",
/*004*/ "Electric Piano 1",
/*005*/ "Electric Piano 2",
/*006*/ "Harpsichord",
/*007*/ "Clavinet",
/*008*/ "Celesta",
/*009*/ "Glockenspiel",
/*010*/ "Music Box",
/*011*/ "Vibraphone",
/*012*/ "Marimba",
/*013*/ "Xylophone",
/*014*/ "Tubular Bells",
/*015*/ "Dulcimer",
/*016*/ "Drawbar Organ",
/*017*/ "Percussive Organ",
/*018*/ "Rock Organ",
/*019*/ "Church Organ",
/*020*/ "Reed Organ",
/*021*/ "Accordion",
/*022*/ "Harmonica",
/*023*/ "Tango Accordion",
/*024*/ "Acoustic Guitar (nylon)",
/*025*/ "Acoustic Guitar (steel)",
/*026*/ "Electric Guitar (jazz)",
/*027*/ "Electric Guitar (clean)",
/*028*/ "Electric Guitar (muted)",
/*029*/ "Overdriven Guitar",
/*030*/ "Distortion Guitar",
/*031*/ "Guitar Harmonics",
/*032*/ "Acoustic Bass",
/*033*/ "Electric Bass (finger)",
/*034*/ "Electric Bass (pick)",
/*035*/ "Fretless Bass",
/*036*/ "Slap Bass 1",
/*037*/ "Slap Bass 2",
/*038*/ "Synth Bass 1",
/*039*/ "Synth Bass 2",
/*040*/ "Violin",
/*041*/ "Viola",
/*042*/ "Cello",
/*043*/ "Contrabass",
/*044*/ "Tremolo Strings",
/*045*/ "Pizzicato Strings",
/*046*/ "Orchestral Harp",
/*047*/ "Timpani",
/*048*/ "String Ensemble 1",
/*049*/ "String Ensemble 2",
/*050*/ "SynthStrings 1",
/*051*/ "SynthStrings 2",
/*052*/ "Choir Aahs",
/*053*/ "Voice Oohs",
/*054*/ "Synth Voice",
/*055*/ "Orchestra Hit",
/*056*/ "Trumpet",
/*057*/ "Trombone",
/*058*/ "Tuba",
/*059*/ "Muted Trumpet",
/*060*/ "French Horn",
/*061*/ "Brass Section",
/*062*/ "SynthBrass 1",
/*063*/ "SynthBrass 2",
/*064*/ "Soprano Sax",
/*065*/ "Alto Sax",
/*066*/ "Tenor Sax",
/*067*/ "Baritone Sax",
/*068*/ "Oboe",
/*069*/ "English Horn",
/*070*/ "Bassoon",
/*071*/ "Clarinet",
/*072*/ "Piccolo",
/*073*/ "Flute",
/*074*/ "Recorder",
/*075*/ "Pan Flute",
/*076*/ "Blown Bottle",
/*077*/ "Shakuhachi",
/*078*/ "Whistle",
/*079*/ "Ocarina",
/*080*/ "Lead 1 (square)",
/*081*/ "Lead 2 (sawtooth)",
/*082*/ "Lead 3 (calliope)",
/*083*/ "Lead 4 (chiff)",
/*084*/ "Lead 5 (charang)",
/*085*/ "Lead 6 (voice)",
/*086*/ "Lead 7 (fifths)",
/*087*/ "Lead 8 (bass+lead)",
/*088*/ "Pad 1 (new age)",
/*089*/ "Pad 2 (warm)",
/*090*/ "Pad 3 (polysynth)",
/*091*/ "Pad 4 (choir)",
/*092*/ "Pad 5 (bowed)",
/*093*/ "Pad 6 (metallic)",
/*094*/ "Pad 7 (halo)",
/*095*/ "Pad 8 (sweep)",
/*096*/ "FX 1 (rain)",
/*097*/ "FX 2 (soundtrack)",
/*098*/ "FX 3 (crystal)",
/*099*/ "FX 4 (atmosphere)",
/*100*/ "FX 5 (brightness)",
/*101*/ "FX 6 (goblins)",
/*102*/ "FX 7 (echoes)",
/*103*/ "FX 8 (sci-fi)",
/*104*/ "Sitar",
/*105*/ "Banjo",
/*106*/ "Shamisen",
/*107*/ "Koto",
/*108*/ "Kalimba",
/*109*/ "Bag pipe",
/*110*/ "Fiddle",
/*111*/ "Shannai",
/*112*/ "Tinkle Bell",
/*113*/ "Agogo",
/*114*/ "Steel Drums",
/*115*/ "Woodblock",
/*116*/ "Taiko Drum",
/*117*/ "Melodic Tom",
/*118*/ "Synth Drum",
/*119*/ "Reverse Cymbal",
/*120*/ "Guitar Fret Noise",
/*121*/ "Breath Noise",
/*122*/ "Seashore",
/*123*/ "Bird Tweet",
/*124*/ "Telephone Ring",
/*125*/ "Helicopter",
/*126*/ "Applause",
/*127*/ "Gunshot" };

char *GM_RhythmKey[47] = {
/*035*/ "Acoustic Bass Drum",
/*036*/ "Bass Drum 1",
/*037*/ "Side Stick",
/*038*/ "Acoustic Snare",
/*039*/ "Hand Clap",
/*040*/ "Electric Snare",
/*041*/ "Low Floor Tom",
/*042*/ "Closed Hi-Hat",
/*043*/ "High Floor Tom",
/*044*/ "Pedal Hi-Hat",
/*045*/ "Low Tom",
/*046*/ "Open Hi-Hat",
/*047*/ "Low-Mid Tom",
/*048*/ "Hi-Mid Tom",
/*049*/ "Crash Cymbal 1",
/*050*/ "High Tom",
/*051*/ "Ride Cymbal 1",
/*052*/ "Chinese Cymbal",
/*053*/ "Ride Bell",
/*054*/ "Tambourine",
/*055*/ "Splash Cymbal",
/*056*/ "Cowbell",
/*057*/ "Crash Cymbal 2",
/*058*/ "Vibraslap",
/*059*/ "Ride Cymbal 2",
/*060*/ "Hi Bongo",
/*061*/ "Low Bongo",
/*062*/ "Mute Hi Conga",
/*063*/ "Open Hi Conga",
/*064*/ "Low Conga",
/*065*/ "High Timbale",
/*066*/ "Low Timbale",
/*067*/ "High Agogo",
/*068*/ "Low Agogo",
/*069*/ "Cabasa",
/*070*/ "Maracas",
/*071*/ "Short Whistle",
/*072*/ "Long Whistle",
/*073*/ "Short Guiro",
/*074*/ "Long Guiro",
/*075*/ "Claves",
/*076*/ "Hi Wood Block",
/*077*/ "Low Wood Block",
/*078*/ "Mute Cuica",
/*079*/ "Open Cuica",
/*080*/ "Mute Triangle"
/*081*/ "Open Triangle" };
