
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = 안녕 컴퓨터
static const uint8_t KEYWORD_ARRAY[] = {
        0x99, 0xa8, 0x9b, 0x0b, 0x9a, 0x86, 0x49, 0x80, 0x86, 0x61, 0x4b, 0x4c, 0x36, 0xe0, 0x01, 0xa6, 0xb4, 0x45,
        0x26, 0xa2, 0x4e, 0x47, 0xc0, 0xc5, 0x1f, 0x6f, 0x5c, 0xc7, 0xbf, 0x00, 0xd0, 0xa6, 0xa2, 0x9a, 0x6c, 0x58,
        0x60, 0x90, 0x40, 0xcd, 0x3c, 0xdd, 0x25, 0x52, 0xeb, 0x75, 0x78, 0x37, 0x69, 0x92, 0x13, 0x13, 0x34, 0x6b,
        0xe5, 0x81, 0x01, 0xe2, 0xbf, 0x49, 0x3b, 0xbe, 0x4d, 0xd7, 0x3a, 0x4e, 0xac, 0x13, 0xd1, 0x03, 0x91, 0x08,
        0x55, 0x56, 0xb1, 0x0d, 0x39, 0x23, 0xf5, 0xa5, 0x5b, 0x49, 0x57, 0x32, 0x78, 0xff, 0xa7, 0x5b, 0x1b, 0x24,
        0x36, 0x79, 0xce, 0xcb, 0xbe, 0xe4, 0x2e, 0xa1, 0x0b, 0x17, 0x6a, 0x6a, 0x3c, 0x07, 0x43, 0x76, 0x83, 0x84,
        0xcf, 0x96, 0xdc, 0x76, 0x91, 0xef, 0x72, 0x9b, 0x27, 0xa0, 0x5b, 0x79, 0xe7, 0x50, 0x8b, 0x24, 0x60, 0x0a,
        0x54, 0x7d, 0x27, 0x8b, 0x82, 0x33, 0xf2, 0xb5, 0x82, 0x5d, 0x27, 0xb9, 0xb3, 0xb0, 0xfd, 0x5a, 0x12, 0x48,
        0x4b, 0x50, 0xa8, 0xd5, 0x6e, 0x25, 0xee, 0xfb, 0xfb, 0xcf, 0x9b, 0x69, 0xe4, 0xde, 0x37, 0x8f, 0xf4, 0xca,
        0xf1, 0x1c, 0xc9, 0xbd, 0x22, 0xa6, 0x9e, 0xb7, 0x6b, 0x90, 0x45, 0x40, 0x9a, 0xf2, 0xd9, 0x9e, 0xf7, 0x6b,
        0x84, 0x98, 0x6e, 0xa2, 0xf2, 0xe5, 0x83, 0xbc, 0x0e, 0xba, 0xd0, 0xed, 0x00, 0xaa, 0x9e, 0x62, 0x17, 0x93,
        0x87, 0xce, 0x08, 0x6e, 0xe3, 0x9c, 0x24, 0xe8, 0xa1, 0xc9, 0xf1, 0xa0, 0x52, 0xf1, 0x20, 0x81, 0x76, 0x5a,
        0xd1, 0x01, 0x88, 0x71, 0x28, 0x48, 0x63, 0x47, 0xc3, 0x46, 0xf3, 0x3e, 0x0e, 0x57, 0x9b, 0xc5, 0xda, 0x50,
        0x7a, 0x2d, 0x14, 0xd3, 0xfc, 0xb6, 0x24, 0xe5, 0x26, 0xcb, 0x9b, 0xa5, 0x76, 0xa8, 0x80, 0x42, 0x6d, 0xc3,
        0xf7, 0xfd, 0xde, 0xbd, 0x94, 0x83, 0xdf, 0x86, 0x01, 0x04, 0xfa, 0x6e, 0x41, 0x94, 0xb9, 0xeb, 0xf2, 0xc4,
        0x7a, 0xfe, 0x8b, 0xed, 0x3e, 0x7b, 0xe0, 0xf7, 0xb9, 0x1c, 0x2e, 0x38, 0x5c, 0xb1, 0x05, 0x0d, 0x75, 0xea,
        0xea, 0x39, 0x6a, 0xfa, 0x40, 0xf8, 0x95, 0xc1, 0x96, 0x73, 0x53, 0xea, 0x39, 0xdc, 0xb8, 0x30, 0xd9, 0x3f,
        0x7e, 0x1c, 0xdc, 0xbc, 0xa3, 0xc2, 0x92, 0x80, 0x80, 0x4f, 0xee, 0x77, 0x26, 0x14, 0xa5, 0x1a, 0xa4, 0x95,
        0x30, 0x5b, 0xa3, 0x1c, 0xf5, 0x51, 0x3c, 0x00, 0x25, 0x3e, 0x56, 0x36, 0x14, 0xb9, 0xd8, 0xa0, 0x12, 0xb6,
        0xe7, 0x87, 0x9c, 0xc2, 0x53, 0xa7, 0x37, 0x30, 0x11, 0x8c, 0x7c, 0x4c, 0xa4, 0x75, 0xd6, 0xdc, 0xb2, 0x8f,
        0x00, 0xb9, 0x74, 0xe8, 0x5f, 0xca, 0x74, 0xce, 0xdb, 0x90, 0x42, 0x82, 0x20, 0x1b, 0x79, 0xb0, 0x36, 0xd6,
        0x5d, 0x75, 0xf5, 0xe1, 0x7f, 0xd8, 0x80, 0xd7, 0x0a, 0x11, 0xe4, 0x42, 0x64, 0x93, 0x6d, 0x59, 0x7a, 0xf0,
        0xdc, 0xca, 0xfe, 0xc7, 0x7d, 0x16, 0x6c, 0x6e, 0x93, 0x63, 0x5b, 0x10, 0x16, 0xa3, 0x54, 0x91, 0x01, 0xb2,
        0x01, 0xaf, 0x0e, 0x98, 0xdc, 0x8b, 0xb5, 0x73, 0x8f, 0x22, 0xb6, 0x92, 0x1d, 0x77, 0x73, 0xef, 0xb9, 0x33,
        0x78, 0xb0, 0xc6, 0x43, 0xdd, 0xc2, 0x22, 0x7b, 0x6a, 0xb9, 0xfd, 0xb3, 0x9b, 0x4b, 0xfd, 0xca, 0x99, 0x7a,
        0x55, 0x38, 0xc4, 0x75, 0xfa, 0x86, 0x59, 0xde, 0x4a, 0xa2, 0xd1, 0x29, 0x3e, 0x62, 0xf2, 0xe5, 0x87, 0x56,
        0xaa, 0x51, 0x71, 0x00, 0xc1, 0x9f, 0x27, 0xa1, 0xaa, 0xb2, 0x28, 0x8d, 0x8c, 0xc1, 0x11, 0xc5, 0xb2, 0xe3,
        0x58, 0x56, 0xef, 0x9a, 0xa4, 0x91, 0xf2, 0x14, 0xf5, 0x21, 0x7b, 0x7e, 0xea, 0x57, 0x6f, 0xbf, 0x2f, 0x5b,
        0xb4, 0x72, 0x26, 0xf0, 0x4d, 0xca, 0x25, 0xef, 0xf4, 0x6a, 0xfe, 0x5e, 0xb1, 0x6f, 0xa2, 0xf1, 0x0d, 0xa6,
        0x31, 0xfd, 0x79, 0x45, 0xff, 0x90, 0xf9, 0xf1, 0x63, 0xc3, 0x29, 0x30, 0x09, 0x42, 0x09, 0xe5, 0xa8, 0xc0,
        0xe6, 0x58, 0x29, 0x41, 0x65, 0xf6, 0xf3, 0xe3, 0xeb, 0xaf, 0x88, 0x49, 0xf4, 0xe6, 0xc1, 0xc8, 0x8b, 0xb4,
        0xc9, 0x93, 0xff, 0xff, 0x02, 0xe0, 0x03, 0xf1, 0x3f, 0x87, 0x0c, 0x32, 0xd0, 0x29, 0x78, 0x09, 0xd5, 0x8e,
        0x8b, 0x79, 0x3f, 0xf1, 0xa2, 0x53, 0xca, 0x0f, 0xa4, 0x47, 0x37, 0x56, 0x2f, 0x9f, 0xa9, 0x36, 0x25, 0x23,
        0x77, 0x5c, 0x01, 0xcb, 0xaf, 0x5c, 0x02, 0x58, 0x4d, 0xe5, 0x86, 0x4c, 0x6d, 0xae, 0x98, 0x24, 0x72, 0x14
};

// context = seumateu_jomyeong
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x6f, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x18, 0x15, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f,
        0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0xeb, 0xaa, 0xa8, 0xeb, 0x93, 0xa0,
        0x29, 0x20, 0x40, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20, 0x24, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0xec, 0x9c, 0xbc, 0xeb, 0xa1, 0x9c, 0x20, 0x28,
        0xeb, 0x8b, 0xa4, 0x29, 0x20, 0xeb, 0xb0, 0x94, 0xea, 0xbf, 0x94, 0x20, 0x28, 0xec, 0xa4, 0x98, 0x29, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20, 0x24, 0x63, 0x6f, 0x6c,
        0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0xec, 0x9c, 0xbc, 0xeb, 0xa1, 0x9c, 0x20, 0x28, 0xeb,
        0xaa, 0xa8, 0xeb, 0x93, 0xa0, 0x29, 0x20, 0x40, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0xeb, 0x8b, 0xa4,
        0x29, 0x20, 0xeb, 0xb0, 0x94, 0xea, 0xbf, 0x94, 0x20, 0x28, 0xec, 0xa4, 0x98, 0x29, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x2d, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63,
        0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0xec, 0x97, 0x90, 0x20, 0xec, 0x9e, 0x88, 0xeb, 0x8a, 0x94, 0x29,
        0x20, 0x28, 0xeb, 0xaa, 0xa8, 0xeb, 0x93, 0xa0, 0x29, 0x20, 0x40, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28,
        0xeb, 0x8b, 0xa4, 0x29, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0xec,
        0x9c, 0xbc, 0xeb, 0xa1, 0x9c, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20, 0xeb, 0xb0, 0x94, 0xea, 0xbf, 0x94,
        0x20, 0x28, 0xec, 0xa4, 0x98, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x24, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0xec, 0x9c, 0xbc, 0xeb, 0xa1, 0x9c, 0x20, 0x24, 0x6c,
        0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28,
        0xec, 0x97, 0x90, 0x20, 0xec, 0x9e, 0x88, 0xeb, 0x8a, 0x94, 0x29, 0x20, 0x28, 0xeb, 0xaa, 0xa8, 0xeb, 0x93,
        0xa0, 0x29, 0x20, 0x40, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20, 0xeb, 0xb0,
        0x94, 0xea, 0xbf, 0x94, 0x20, 0x28, 0xec, 0xa4, 0x98, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61,
        0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0xeb, 0xaa, 0xa8, 0xeb, 0x93, 0xa0, 0x29, 0x20, 0x40, 0x6c, 0x69, 0x67,
        0x68, 0x74, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20, 0x24, 0x73, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x73, 0x74,
        0x61, 0x74, 0x65, 0x20, 0x28, 0xec, 0xa4, 0x98, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e,
        0x20, 0x28, 0xec, 0x97, 0x90, 0x20, 0xec, 0x9e, 0x88, 0xeb, 0x8a, 0x94, 0x29, 0x20, 0x28, 0xeb, 0xaa, 0xa8,
        0xeb, 0x93, 0xa0, 0x29, 0x20, 0x40, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0xeb, 0x8b, 0xa4, 0x29, 0x20,
        0x24, 0x73, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x73, 0x74, 0x61, 0x74, 0x65, 0x20, 0x28, 0xec, 0xa4, 0x98, 0x29,
        0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f,
        0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xed, 0x8c, 0x8c, 0xeb, 0x9e, 0x80, 0xec,
        0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xec, 0xb4, 0x88, 0xeb, 0xa1, 0x9d, 0xec,
        0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xec, 0xa3, 0xbc, 0xed, 0x99, 0xa9, 0xec,
        0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xec, 0x98, 0xa4, 0xeb, 0xa0, 0x8c, 0xec,
        0xa7, 0x80, 0xec, 0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xeb, 0xb6, 0x84, 0xed,
        0x99, 0x8d, 0xec, 0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xed, 0x95, 0x91, 0xed,
        0x81, 0xac, 0xec, 0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xeb, 0xb3, 0xb4, 0xeb,
        0x9d, 0xbc, 0xec, 0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xeb, 0xb9, 0xa8, 0xea,
        0xb0, 0x84, 0xec, 0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xed, 0x9d, 0xb0, 0xec,
        0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xeb, 0x85, 0xb8, 0xeb, 0x9e, 0x80, 0xec,
        0x83, 0x89, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x73, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0xea, 0xba, 0xbc, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xec, 0xbc,
        0x9c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xed, 0x99, 0x94, 0xec, 0x9e, 0xa5, 0xec, 0x8b, 0xa4, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xec, 0xb9, 0xa8, 0xec, 0x8b, 0xa4, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x63,
        0x72, 0x6f, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0xeb, 0xb6, 0x88, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0xeb, 0xb6, 0x88, 0xec, 0x9d, 0x84, 0x0a, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
        0x2a, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x49, 0x00,
        0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00,
        0x76, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x95, 0x00,
        0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xea, 0xba, 0xbc, 0x00,
        0xeb, 0x85, 0xb8, 0xeb, 0x9e, 0x80, 0xec, 0x83, 0x89, 0x00, 0xeb, 0x8b, 0xa4, 0x00, 0xeb, 0xaa, 0xa8, 0xeb,
        0x93, 0xa0, 0x00, 0xeb, 0xb0, 0x94, 0xea, 0xbf, 0x94, 0x00, 0xeb, 0xb3, 0xb4, 0xeb, 0x9d, 0xbc, 0xec, 0x83,
        0x89, 0x00, 0xeb, 0xb6, 0x84, 0xed, 0x99, 0x8d, 0xec, 0x83, 0x89, 0x00, 0xeb, 0xb6, 0x88, 0x00, 0xeb, 0xb6,
        0x88, 0xec, 0x9d, 0x84, 0x00, 0xeb, 0xb9, 0xa8, 0xea, 0xb0, 0x84, 0xec, 0x83, 0x89, 0x00, 0xec, 0x97, 0x90,
        0x20, 0xec, 0x9e, 0x88, 0xeb, 0x8a, 0x94, 0x00, 0xec, 0x98, 0xa4, 0xeb, 0xa0, 0x8c, 0xec, 0xa7, 0x80, 0xec,
        0x83, 0x89, 0x00, 0xec, 0x9c, 0xbc, 0xeb, 0xa1, 0x9c, 0x00, 0xec, 0xa3, 0xbc, 0xed, 0x99, 0xa9, 0xec, 0x83,
        0x89, 0x00, 0xec, 0xa4, 0x98, 0x00, 0xec, 0xb4, 0x88, 0xeb, 0xa1, 0x9d, 0xec, 0x83, 0x89, 0x00, 0xec, 0xb9,
        0xa8, 0xec, 0x8b, 0xa4, 0x00, 0xec, 0xbc, 0x9c, 0x00, 0xed, 0x8c, 0x8c, 0xeb, 0x9e, 0x80, 0xec, 0x83, 0x89,
        0x00, 0xed, 0x95, 0x91, 0xed, 0x81, 0xac, 0xec, 0x83, 0x89, 0x00, 0xed, 0x99, 0x94, 0xec, 0x9e, 0xa5, 0xec,
        0x8b, 0xa4, 0x00, 0xed, 0x9d, 0xb0, 0xec, 0x83, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
        0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
        0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
        0x1c, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x36, 0x00,
        0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
        0x52, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x6a, 0x00,
        0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x08, 0x2a, 0x15, 0x16,
        0x19, 0x01, 0x15, 0x1a, 0x27, 0x11, 0x1c, 0x01, 0x14, 0x16, 0x04, 0x28, 0x15, 0x17, 0x01, 0x08, 0x23, 0x17,
        0x16, 0x19, 0x01, 0x1a, 0x27, 0x11, 0x17, 0x1e, 0x15, 0x24, 0x16, 0x26, 0x1a, 0x27, 0x11, 0x17, 0x1e, 0x13,
        0x17, 0x1e, 0x19, 0x28, 0x13, 0x03, 0x01, 0x13, 0x07, 0x01, 0x15, 0x1a, 0x27, 0x11, 0x06, 0x0a, 0x15, 0x15,
        0x28, 0x15, 0x16, 0x19, 0x06, 0x15, 0x2b, 0x0a, 0x1a, 0x27, 0x11, 0x28, 0x19, 0x16, 0x2c, 0x1e, 0x24, 0x1f,
        0x26, 0x1a, 0x27, 0x11, 0x2c, 0x23, 0x2e, 0x16, 0x19, 0x16, 0x11, 0x1b, 0x27, 0x11, 0x2e, 0x0a, 0x14, 0x1a,
        0x0a, 0x13, 0x12, 0x10, 0x18, 0x01, 0x19, 0x01, 0x15, 0x1a, 0x27, 0x11, 0x18, 0x0a, 0x26, 0x12, 0x28, 0x1a,
        0x27, 0x11, 0x09, 0x1f, 0x2b, 0x01, 0x26, 0x1a, 0x0a, 0x13, 0x09, 0x0a, 0x15, 0x1a, 0x27, 0x11, 0x0b, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
        0x18, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00,
        0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0d, 0x00,
        0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0b, 0x00,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
        0x15, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
        0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00,
        0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x73, 0x74, 0x61, 0x74, 0x65,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0x12, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00,
        0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00,
        0x28, 0x00, 0x00, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0xec, 0x9c, 0xbc,
        0xeb, 0xa1, 0x9c, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x73, 0x74, 0x61, 0x74, 0x65,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00,
        0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x00, 0x00,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x54, 0x03, 0x00, 0x00, 0x90, 0x04,
        0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0xa4, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00,
        0xa4, 0x01, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x09, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
        0x84, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x00,
        0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xc4, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xe8, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x0c, 0x01, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x30, 0x01, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00, 0xa4, 0x01, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xe4, 0x01, 0x00, 0x00, 0xa8, 0x02, 0x00, 0x00,
        0x30, 0x03, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0xe4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x09, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00,
        0x10, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x02,
        0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x50, 0x02, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x74, 0x02, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe4, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x98, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0xbc, 0x02, 0x00, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0xd4, 0x02, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00, 0xbc, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0xd4, 0x02, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x02, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x02, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x03, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x44, 0x03, 0x00, 0x00, 0x30, 0x03, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00, 0x54, 0x03, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00, 0x68, 0x03,
        0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x94, 0x03, 0x00, 0x00,
        0x1c, 0x04, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xa8, 0x03, 0x00, 0x00, 0x94, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x02, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0xa8, 0x03, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x03, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0xd4, 0x03,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x03, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00, 0xf8, 0x03,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x34, 0x04, 0x00, 0x00, 0x6c, 0x04,
        0x00, 0x00, 0x1c, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x48, 0x04, 0x00, 0x00, 0x34, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x5c, 0x04, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x1c, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xa4, 0x04, 0x00, 0x00, 0x90, 0x04, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x02, 0x00, 0x00, 0x00, 0xbc, 0x04, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 0xa4, 0x04, 0x00, 0x00, 0x06, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xd0, 0x04, 0x00, 0x00, 0xbc, 0x04, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xe8, 0x04, 0x00, 0x00, 0x20, 0x05,
        0x00, 0x00, 0xd0, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0xfc, 0x04, 0x00, 0x00, 0xe8, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x10, 0x05, 0x00, 0x00, 0xfc, 0x04, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xd0, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x34, 0x05, 0x00, 0x00, 0x20, 0x05, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xa4, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x5c, 0x05, 0x00, 0x00, 0x94, 0x05, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x70, 0x05, 0x00, 0x00, 0x5c, 0x05, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x84, 0x05, 0x00, 0x00, 0x70, 0x05, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x05, 0x00, 0x00, 0x94, 0x05, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xd4, 0x05, 0x00, 0x00, 0xc8, 0x08, 0x00, 0x00,
        0x40, 0x0a, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0xec, 0x05, 0x00, 0x00, 0x64, 0x07, 0x00, 0x00, 0xd4, 0x05, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xec, 0x05, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x06, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00,
        0x40, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x34, 0x06, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0x1c, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x4c, 0x06, 0x00, 0x00, 0x84, 0x06, 0x00, 0x00, 0x34, 0x06,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00,
        0x4c, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x06,
        0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x34, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x98, 0x06,
        0x00, 0x00, 0x84, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x1c, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xbc, 0x06,
        0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xe4, 0x06,
        0x00, 0x00, 0x1c, 0x07, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0xf8, 0x06, 0x00, 0x00, 0xe4, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x07, 0x00, 0x00, 0xf8, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0x1c, 0x07, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x54, 0x07, 0x00, 0x00, 0x40, 0x07, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x30, 0x08, 0x00, 0x00, 0xa4, 0x08, 0x00, 0x00,
        0x64, 0x07, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x98, 0x07,
        0x00, 0x00, 0x0c, 0x08, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x02, 0x00, 0x00, 0x00, 0xb0, 0x07, 0x00, 0x00, 0xe8, 0x07, 0x00, 0x00, 0x98, 0x07, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc4, 0x07, 0x00, 0x00, 0xb0, 0x07, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd8, 0x07, 0x00, 0x00, 0xc4, 0x07,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x07, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xe8, 0x07,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x08, 0x00, 0x00, 0x0c, 0x08,
        0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x07, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x48, 0x08, 0x00, 0x00, 0x80, 0x08,
        0x00, 0x00, 0x30, 0x08, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x5c, 0x08, 0x00, 0x00, 0x48, 0x08, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x70, 0x08, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x30, 0x08, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x94, 0x08, 0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x64, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xb8, 0x08, 0x00, 0x00, 0xa4, 0x08, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xdc, 0x08, 0x00, 0x00, 0xc8, 0x08, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x03, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x00, 0x00, 0xa8, 0x09, 0x00, 0x00, 0x1c, 0x0a, 0x00, 0x00, 0xdc, 0x08,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00,
        0x84, 0x09, 0x00, 0x00, 0xf8, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x28, 0x09, 0x00, 0x00, 0x60, 0x09, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x09, 0x00, 0x00, 0x28, 0x09, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x09, 0x00, 0x00, 0x3c, 0x09, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x09, 0x00, 0x00, 0x60, 0x09, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x98, 0x09, 0x00, 0x00, 0x84, 0x09, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x08, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xc0, 0x09, 0x00, 0x00, 0xf8, 0x09, 0x00, 0x00,
        0xa8, 0x09, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x09,
        0x00, 0x00, 0xc0, 0x09, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xe8, 0x09, 0x00, 0x00, 0xd4, 0x09, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xa8, 0x09, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x0c, 0x0a, 0x00, 0x00, 0xf8, 0x09, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xdc, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x30, 0x0a, 0x00, 0x00, 0x1c, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
        0x5c, 0x0a, 0x00, 0x00, 0x0c, 0x0b, 0x00, 0x00, 0x80, 0x0b, 0x00, 0x00, 0x40, 0x0a, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00, 0xe8, 0x0a, 0x00, 0x00,
        0x5c, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x8c, 0x0a,
        0x00, 0x00, 0xc4, 0x0a, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0xa0, 0x0a, 0x00, 0x00, 0x8c, 0x0a, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x0a, 0x00, 0x00, 0xa0, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd8, 0x0a, 0x00, 0x00, 0xc4, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x0a, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x0a, 0x00, 0x00, 0xe8, 0x0a, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x24, 0x0b, 0x00, 0x00, 0x5c, 0x0b, 0x00, 0x00, 0x0c, 0x0b, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x38, 0x0b, 0x00, 0x00, 0x24, 0x0b,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4c, 0x0b, 0x00, 0x00,
        0x38, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0b,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x0b, 0x00, 0x00,
        0x5c, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0a,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x94, 0x0b, 0x00, 0x00,
        0x80, 0x0b, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb8, 0x0b, 0x00, 0x00,
        0xa4, 0x0b, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xd4, 0x0b,
        0x00, 0x00, 0xe8, 0x0c, 0x00, 0x00, 0x70, 0x0d, 0x00, 0x00, 0xb8, 0x0b, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xec, 0x0b, 0x00, 0x00, 0x74, 0x0c, 0x00, 0x00, 0xd4, 0x0b,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
        0xec, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x18, 0x0c,
        0x00, 0x00, 0x50, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x0c, 0x00, 0x00, 0x2c, 0x0c, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x0c, 0x00, 0x00, 0x50, 0x0c, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x8c, 0x0c, 0x00, 0x00, 0xc4, 0x0c, 0x00, 0x00, 0x74, 0x0c, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xa0, 0x0c, 0x00, 0x00, 0x8c, 0x0c,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x0c, 0x00, 0x00,
        0xa0, 0x0c, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x0c,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00,
        0xc4, 0x0c, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x0b,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x0c, 0x00, 0x00,
        0xe8, 0x0c, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x14, 0x0d,
        0x00, 0x00, 0x4c, 0x0d, 0x00, 0x00, 0xfc, 0x0c, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x28, 0x0d, 0x00, 0x00, 0x14, 0x0d, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x0d, 0x00, 0x00, 0x28, 0x0d, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x0c, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x60, 0x0d, 0x00, 0x00, 0x4c, 0x0d, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x88, 0x0d, 0x00, 0x00, 0xc0, 0x0d, 0x00, 0x00, 0x70, 0x0d, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x9c, 0x0d, 0x00, 0x00, 0x88, 0x0d,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x0d, 0x00, 0x00,
        0x9c, 0x0d, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0d,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x0d, 0x00, 0x00,
        0xc0, 0x0d, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00
};



#endif // PARAMS_H
    