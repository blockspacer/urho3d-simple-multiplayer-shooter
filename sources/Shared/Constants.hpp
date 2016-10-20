#pragma once
#include <Urho3D/Container/Str.h>
#include <Urho3D/Input/Input.h>
#include <Urho3D/AngelScript/Script.h>

void BindConstantsToAngelScript (Urho3D::Script *script);
namespace ServerConstants
{
const float DEFAULT_CAMERA_MOVE_SPEED = 10.0f;
const float SPEED_UP_MODIFER = 3.0f;
const int PORT = 6391;

const int KEY_SPEED_UP = Urho3D::KEY_SHIFT;
const int KEY_LEFT = Urho3D::KEY_A;
const int KEY_RIGHT = Urho3D::KEY_D;
const int KEY_FORWARD = Urho3D::KEY_W;
const int KEY_BACK = Urho3D::KEY_S;
const int KEY_UP = Urho3D::KEY_Q;
const int KEY_DOWN = Urho3D::KEY_E;
const int TIME_BEFORE_AUTOMATIC_NAMING = 1.0f;

const float MINIMUM_DISTANCE_BETWEEN_OBSTACLES = 10.0f;
const int MINIMUM_OBSTACLES_COUNT = 5;
const int MAXIMUM_OBSTACLES_COUNT = 25;
}

namespace GameplayConstants
{
const int RESPAWN_TIME = 10.0f;
const int HEALTH_REGENERATION = 3.0f;
const int MAX_HEALTH = 100.0f;
const int DEAD_PLAYERS_REMOVE_TIME = 10.0f;
const float FIRE_COOLDOWN_TIME = 1.0f;

const float MOVE_IMPULSE = 50.0f;
const float ROTATION_IMPULSE = 3.5f;
}

namespace SerializationConstants
{
const Urho3D::StringHash HEALTH_VAR_HASH ("Health");
const Urho3D::StringHash OBJECT_TYPE_VAR_HASH ("ObjectType");
const int OBJECT_TYPE_WITHOUT_LOCALS = -1;
const int OBJECT_TYPE_TERRAIN = 0;
const int OBJECT_TYPE_OBSTACLE = 1;
const int OBJECT_TYPE_PLAYER = 2;
const int OBJECT_TYPE_SHELL = 3;
}

namespace SceneConstants
{
const Urho3D::String TERRAIN_LOCAL_PREFAB ("Objects/terrain_local.xml");
const Urho3D::String OBSTACLE_LOCAL_PREFAB ("Objects/obstacle_local.xml");
const Urho3D::String PLAYER_LOCAL_PREFAB ("Objects/player_local.xml");
const Urho3D::String SHELL_LOCAL_PREFAB ("Objects/shell_local.xml");
}

namespace NetworkMessageIds
{
enum NetworkMessageId
{
    // Server to client messages

    STC_PLAYER_NAME_SETTED = 101, // Data: nameString
    STC_PLAYER_SPAWNED = 102, // Data: nodeId (unsigned)
    STC_CHAT_MESSAGE = 103, // Data: senderName (String), message (String)
    STC_SERVER_MESSAGE = 104, // Data: message (String)
    STC_RETURN_TIME_UNTIL_SPAWN = 105, // Data: time (float)

    // Client to server messages

    CTS_REQUEST_NAME = 201, // Data: nameString
    CTS_SET_MOVE_REQUEST = 202, // Data: normalizedMoveRequest (Vector2)
    CTS_REQUEST_FIRE = 203, // Data: none
    CTS_REQUEST_CHAT_MESSAGE = 204, // Data: message (String)
    CTS_GET_TIME_UNTIL_SPAWN = 205 // Data: empty
};
}
