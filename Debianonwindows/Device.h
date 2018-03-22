#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/* Struct */


class Device
{
public:
	Device();
	~Device();

public:
	void connect();

private:
	bool connect_bluetooth();
	bool connect_wifi();
	bool connect_camera();

private:

};