#include <stdio.h>

enum msg_type { ACK, PING, ERROR };

void f(enum msg_type t) {
    switch (t) {
    case ACK:
        // do nothing
        break;
    case PING:
        // do something
        break;
    case ERROR:
        // do something else
        break;
    }
}