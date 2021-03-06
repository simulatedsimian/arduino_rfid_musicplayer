#ifndef ARDUINO_RFID_MUSICPLAYER_MP3PLAYER_H
#define ARDUINO_RFID_MUSICPLAYER_MP3PLAYER_H

#include "state.h"

namespace MP3Player {
	extern StateMachine stateMachine;

	void Setup();
	void PlayAlbum(int id);
	bool IsPlaying();
};

#endif  // ARDUINO_RFID_MUSICPLAYER_MP3PLAYER_H
