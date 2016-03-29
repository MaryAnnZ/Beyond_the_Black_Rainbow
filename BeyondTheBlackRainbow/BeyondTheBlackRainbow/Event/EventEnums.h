#pragma once

static enum EventTrigger {
	EVENT,
	RAYTRACE_HIT,
	TRIGGER_ENTER,
	TRIGGER_EXIT,
};

static enum EventIdentifier {
	DOOR_TRIGGER,
	OPEN_DOOR,
	LIGHT_FOUND,
	OBJECT_FOUND,
	VASE_FOUND,
	DOOR_TRIGGER1,
	DOOR_TRIGGER3,
	DOOR_TRIGGER6,
	_DOOR_TRIGGER6,
	OPEN_DOOR_ROOM1,
	OPEN_DOOR_ROOM2,
	OPEN_DOOR_ROOM3,
	OPEN_DOOR_ROOM4,
	OPEN_DOOR_ROOM5,
	OPEN_DOOR_ROOM6,
	_OPEN_DOOR_ROOM6,
};