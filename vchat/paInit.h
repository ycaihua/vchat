#include <portaudio.h>

/*
 * Initialize portaudio
 * Initialize in constructor
 * Terminate in destructor
 */
class paInit{
public:
	paInit(){
		Pa_Initialize();
	}

	~paInit(){
		Pa_Terminate();
	}
};