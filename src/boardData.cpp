#include "boardData.hpp"

const BitBoard32 SQUARE_CONFLICT_MASKS[BOARD_SQUARE_COUNT][BOARD_TRI_ROW_COUNT] = {
        { 0x07e3f001, 0x07fbfdfe, 0x07fbfdfe },
        { 0x07e3f002, 0x07f7fbfd, 0x07f7fbfd },
        { 0x07e3f004, 0x07eff7fb, 0x07eff7fb },
        { 0x071f8e08, 0x07dfeff7, 0x07dfeff7 },
        { 0x071f8e10, 0x07bfdfef, 0x07bfdfef },
        { 0x071f8e20, 0x077fbfdf, 0x077fbfdf },
        { 0x00fc7e40, 0x06ff7fbf, 0x06ff7fbf },
        { 0x00fc7e80, 0x05feff7f, 0x05feff7f },
        { 0x00fc7f00, 0x03fdfeff, 0x03fdfeff },
        { 0x07e003f8, 0x07fbfdfe, 0x07fbfdfe },
        { 0x07e005f8, 0x07f7fbfd, 0x07f7fbfd },
        { 0x07e009f8, 0x07eff7fb, 0x07eff7fb },
        { 0x071c11c7, 0x07dfeff7, 0x07dfeff7 },
        { 0x071c21c7, 0x07bfdfef, 0x07bfdfef },
        { 0x071c41c7, 0x077fbfdf, 0x077fbfdf },
        { 0x00fc803f, 0x06ff7fbf, 0x06ff7fbf },
        { 0x00fd003f, 0x05feff7f, 0x05feff7f },
        { 0x00fe003f, 0x03fdfeff, 0x03fdfeff },
        { 0x0007f1f8, 0x07fbfdfe, 0x07fbfdfe },
        { 0x000bf1f8, 0x07f7fbfd, 0x07f7fbfd },
        { 0x0013f1f8, 0x07eff7fb, 0x07eff7fb },
        { 0x00238fc7, 0x07dfeff7, 0x07dfeff7 },
        { 0x00438fc7, 0x07bfdfef, 0x07bfdfef },
        { 0x00838fc7, 0x077fbfdf, 0x077fbfdf },
        { 0x01007e3f, 0x06ff7fbf, 0x06ff7fbf },
        { 0x02007e3f, 0x05feff7f, 0x05feff7f },
        { 0x04007e3f, 0x03fdfeff, 0x03fdfeff },
        { 0x07fbfdfe, 0x07e3f001, 0x07fbfdfe },
        { 0x07f7fbfd, 0x07e3f002, 0x07f7fbfd },
        { 0x07eff7fb, 0x07e3f004, 0x07eff7fb },
        { 0x07dfeff7, 0x071f8e08, 0x07dfeff7 },
        { 0x07bfdfef, 0x071f8e10, 0x07bfdfef },
        { 0x077fbfdf, 0x071f8e20, 0x077fbfdf },
        { 0x06ff7fbf, 0x00fc7e40, 0x06ff7fbf },
        { 0x05feff7f, 0x00fc7e80, 0x05feff7f },
        { 0x03fdfeff, 0x00fc7f00, 0x03fdfeff },
        { 0x07fbfdfe, 0x07e003f8, 0x07fbfdfe },
        { 0x07f7fbfd, 0x07e005f8, 0x07f7fbfd },
        { 0x07eff7fb, 0x07e009f8, 0x07eff7fb },
        { 0x07dfeff7, 0x071c11c7, 0x07dfeff7 },
        { 0x07bfdfef, 0x071c21c7, 0x07bfdfef },
        { 0x077fbfdf, 0x071c41c7, 0x077fbfdf },
        { 0x06ff7fbf, 0x00fc803f, 0x06ff7fbf },
        { 0x05feff7f, 0x00fd003f, 0x05feff7f },
        { 0x03fdfeff, 0x00fe003f, 0x03fdfeff },
        { 0x07fbfdfe, 0x0007f1f8, 0x07fbfdfe },
        { 0x07f7fbfd, 0x000bf1f8, 0x07f7fbfd },
        { 0x07eff7fb, 0x0013f1f8, 0x07eff7fb },
        { 0x07dfeff7, 0x00238fc7, 0x07dfeff7 },
        { 0x07bfdfef, 0x00438fc7, 0x07bfdfef },
        { 0x077fbfdf, 0x00838fc7, 0x077fbfdf },
        { 0x06ff7fbf, 0x01007e3f, 0x06ff7fbf },
        { 0x05feff7f, 0x02007e3f, 0x05feff7f },
        { 0x03fdfeff, 0x04007e3f, 0x03fdfeff },
        { 0x07fbfdfe, 0x07fbfdfe, 0x07e3f001 },
        { 0x07f7fbfd, 0x07f7fbfd, 0x07e3f002 },
        { 0x07eff7fb, 0x07eff7fb, 0x07e3f004 },
        { 0x07dfeff7, 0x07dfeff7, 0x071f8e08 },
        { 0x07bfdfef, 0x07bfdfef, 0x071f8e10 },
        { 0x077fbfdf, 0x077fbfdf, 0x071f8e20 },
        { 0x06ff7fbf, 0x06ff7fbf, 0x00fc7e40 },
        { 0x05feff7f, 0x05feff7f, 0x00fc7e80 },
        { 0x03fdfeff, 0x03fdfeff, 0x00fc7f00 },
        { 0x07fbfdfe, 0x07fbfdfe, 0x07e003f8 },
        { 0x07f7fbfd, 0x07f7fbfd, 0x07e005f8 },
        { 0x07eff7fb, 0x07eff7fb, 0x07e009f8 },
        { 0x07dfeff7, 0x07dfeff7, 0x071c11c7 },
        { 0x07bfdfef, 0x07bfdfef, 0x071c21c7 },
        { 0x077fbfdf, 0x077fbfdf, 0x071c41c7 },
        { 0x06ff7fbf, 0x06ff7fbf, 0x00fc803f },
        { 0x05feff7f, 0x05feff7f, 0x00fd003f },
        { 0x03fdfeff, 0x03fdfeff, 0x00fe003f },
        { 0x07fbfdfe, 0x07fbfdfe, 0x0007f1f8 },
        { 0x07f7fbfd, 0x07f7fbfd, 0x000bf1f8 },
        { 0x07eff7fb, 0x07eff7fb, 0x0013f1f8 },
        { 0x07dfeff7, 0x07dfeff7, 0x00238fc7 },
        { 0x07bfdfef, 0x07bfdfef, 0x00438fc7 },
        { 0x077fbfdf, 0x077fbfdf, 0x00838fc7 },
        { 0x06ff7fbf, 0x06ff7fbf, 0x01007e3f },
        { 0x05feff7f, 0x05feff7f, 0x02007e3f },
        { 0x03fdfeff, 0x03fdfeff, 0x04007e3f }
};
