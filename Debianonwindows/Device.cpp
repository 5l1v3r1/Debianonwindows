#include "stdafx.h"
#include "Device.h"

Device::Device() {
}

Device::~Device() {
}

/* Funzioni */
void Device::connect() {
	if ( connect_wifi() ) {

	} else {

	}
}

bool Device::connect_bluetooth() {
	return false;
}

bool Device::connect_wifi() {
	bool connection;
	connection = true;

	return connection;
}

bool Device::connect_camera() {
	return false;
}