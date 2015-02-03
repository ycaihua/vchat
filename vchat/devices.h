#include <portaudio.h>
#include <vector>

class devices{
public:
	/*
	 * get input devices
	 */
	static std::vector<const PaDeviceInfo*>  getInputDevices();
	
	/*
	 * get output devices
	 */
	static std::vector<const PaDeviceInfo*>  getOutputDevices();

};