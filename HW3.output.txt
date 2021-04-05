```
(base) zehui@lambda-gpu-server:~/CS615$ wget --no-check-certificate   https://curl.haxx.se/ca/cacert.pem
(base) zehui@lambda-gpu-server:~/CS615$ openssl s_client -CAfile cacert.pem -connect www.darpa.mil:443 -msg
```
CONNECTED(00000003)
>>> ??? [length 0005]
    16 03 01 01 36
>>> TLS 1.3, Handshake [length 0136], ClientHello
    01 00 01 32 03 03 92 05 e0 b8 c9 2f 81 50 9a 1b
    d6 ea 3c 80 55 60 67 72 4b 41 5d 68 45 73 6c 8b
    29 7b eb 3f 54 f5 20 de aa d1 c9 6c a1 af b3 55
    d1 b2 c4 be 64 53 64 da 73 c9 40 c7 d5 aa b1 28
    b8 ce d4 ba 7f e5 f4 00 3e 13 02 13 03 13 01 c0
    2c c0 30 00 9f cc a9 cc a8 cc aa c0 2b c0 2f 00
    9e c0 24 c0 28 00 6b c0 23 c0 27 00 67 c0 0a c0
    14 00 39 c0 09 c0 13 00 33 00 9d 00 9c 00 3d 00
    3c 00 35 00 2f 00 ff 01 00 00 ab 00 00 00 12 00
    10 00 00 0d 77 77 77 2e 64 61 72 70 61 2e 6d 69
    6c 00 0b 00 04 03 00 01 02 00 0a 00 0c 00 0a 00
    1d 00 17 00 1e 00 19 00 18 00 23 00 00 00 16 00
    00 00 17 00 00 00 0d 00 30 00 2e 04 03 05 03 06
    03 08 07 08 08 08 09 08 0a 08 0b 08 04 08 05 08
    06 04 01 05 01 06 01 03 03 02 03 03 01 02 01 03
    02 02 02 04 02 05 02 06 02 00 2b 00 09 08 03 04
    03 03 03 02 03 01 00 2d 00 02 01 01 00 33 00 26
    00 24 00 1d 00 20 2f 05 40 b1 6e 93 93 dc fe 66
    fd 3a 76 6d 85 83 f1 60 6a a3 e8 9a fa a9 19 58
    ec 67 83 93 68 55
<<< ??? [length 0005]
    16 03 03 00 7a
<<< TLS 1.3, Handshake [length 007a], ServerHello
    02 00 00 76 03 03 c5 94 45 48 a4 64 73 3a 97 bc
    df 24 5f 80 b7 12 3f fd 3f a7 48 97 d6 49 2e c1
    78 d7 fb 6c 07 3c 20 de aa d1 c9 6c a1 af b3 55
    d1 b2 c4 be 64 53 64 da 73 c9 40 c7 d5 aa b1 28
    b8 ce d4 ba 7f e5 f4 13 02 00 00 2e 00 2b 00 02
    03 04 00 33 00 24 00 1d 00 20 cf 09 20 36 87 a3
    17 d7 a2 e4 c0 c0 52 bc b1 e5 e3 e8 2d 6f 8f f2
    73 3e 50 c1 7b 90 ea d9 08 39
<<< ??? [length 0005]
    14 03 03 00 01
<<< ??? [length 0005]
    17 03 03 00 25
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 0014], EncryptedExtensions
    08 00 00 10 00 0e 00 00 00 00 00 0a 00 06 00 04
    00 17 00 1d
<<< ??? [length 0005]
    17 03 03 0b 96
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 0b85], Certificate
    0b 00 0b 81 00 00 0b 7d 00 06 db 30 82 06 d7 30
    82 05 bf a0 03 02 01 02 02 10 0c f1 1c 2e 79 9f
    85 41 be 6e 10 ee fa b7 90 15 30 0d 06 09 2a 86
    48 86 f7 0d 01 01 0b 05 00 30 4d 31 0b 30 09 06
    03 55 04 06 13 02 55 53 31 15 30 13 06 03 55 04
    0a 13 0c 44 69 67 69 43 65 72 74 20 49 6e 63 31
    27 30 25 06 03 55 04 03 13 1e 44 69 67 69 43 65
    72 74 20 53 48 41 32 20 53 65 63 75 72 65 20 53
    65 72 76 65 72 20 43 41 30 1e 17 0d 32 30 30 34
    30 34 30 30 30 30 30 30 5a 17 0d 32 31 30 37 30
    34 31 32 30 30 30 30 5a 30 7f 31 0b 30 09 06 03
    55 04 06 13 02 55 53 31 11 30 0f 06 03 55 04 08
    13 08 56 69 72 67 69 6e 69 61 31 12 30 10 06 03
    55 04 07 13 09 41 72 6c 69 6e 67 74 6f 6e 31 31
    30 2f 06 03 55 04 0a 13 28 44 65 66 65 6e 73 65
    20 41 64 76 61 6e 63 65 64 20 52 65 73 65 61 72
    63 68 20 50 72 6f 6a 65 63 74 20 41 67 65 6e 63
    79 31 16 30 14 06 03 55 04 03 13 0d 77 77 77 2e
    64 61 72 70 61 2e 6d 69 6c 30 82 01 22 30 0d 06
    09 2a 86 48 86 f7 0d 01 01 01 05 00 03 82 01 0f
    00 30 82 01 0a 02 82 01 01 00 b5 75 d7 6a 9b 36
    4f c2 32 72 c4 7b f2 8c 38 14 6c cf cb b3 de a6
    88 e6 54 54 f9 94 71 91 da df 59 18 34 0c e2 54
    31 94 4f 2d ac a5 5b 60 db 4d 30 64 fb 6f ab 91
    b3 c5 d0 97 00 a7 65 9f f6 fe 8f 8f 0a 76 b5 15
    15 e0 f0 38 0f 2a 31 6e 3e e6 61 4c 97 16 b8 d2
    36 eb 6f fe f9 41 7c 43 86 a4 e7 2d ed f5 e7 22
    f3 c6 b0 be 90 04 51 8f cc 70 0b 7d b7 b8 77 9a
    16 cc d6 33 2c c2 03 d9 d2 8e f3 08 41 47 56 cb
    5b 76 7b 6b d3 3d de da 51 4d 61 70 05 c0 ee 88
    ca 31 16 97 f7 71 9a 86 9b 9b 6d 49 34 00 b5 fc
    d6 67 17 0e 70 73 5b 61 06 66 58 72 19 e3 44 50
    c8 2f ca 07 66 a3 9a 7f de 01 73 c8 c0 bd 2b b2
    43 ba dd b0 3e 11 bf 27 06 41 07 c3 8b 4a 83 ee
    e2 36 8b 6a 27 4a 38 42 fb 65 93 ba 93 c6 ac 4c
    4b 25 35 35 73 db 53 9a f2 df 73 05 fb b8 05 81
    79 b1 2f d6 94 c5 c5 57 8f d7 02 03 01 00 01 a3
    82 03 7f 30 82 03 7b 30 1f 06 03 55 1d 23 04 18
    30 16 80 14 0f 80 61 1c 82 31 61 d5 2f 28 e7 8d
    46 38 b4 2c e1 c6 d9 e2 30 1d 06 03 55 1d 0e 04
    16 04 14 74 5e f8 bb f8 54 f1 4d 08 81 eb 1c 94
    5a 5e 06 6d b4 a8 d5 30 43 06 03 55 1d 11 04 3c
    30 3a 82 0d 77 77 77 2e 64 61 72 70 61 2e 6d 69
    6c 82 09 64 61 72 70 61 2e 6d 69 6c 82 0f 6c 6f
    67 69 6e 2e 64 61 72 70 61 2e 6d 69 6c 82 0d 73
    73 6f 2e 64 61 72 70 61 2e 6d 69 6c 30 0e 06 03
    55 1d 0f 01 01 ff 04 04 03 02 05 a0 30 1d 06 03
    55 1d 25 04 16 30 14 06 08 2b 06 01 05 05 07 03
    01 06 08 2b 06 01 05 05 07 03 02 30 6b 06 03 55
    1d 1f 04 64 30 62 30 2f a0 2d a0 2b 86 29 68 74
    74 70 3a 2f 2f 63 72 6c 33 2e 64 69 67 69 63 65
    72 74 2e 63 6f 6d 2f 73 73 63 61 2d 73 68 61 32
    2d 67 36 2e 63 72 6c 30 2f a0 2d a0 2b 86 29 68
    74 74 70 3a 2f 2f 63 72 6c 34 2e 64 69 67 69 63
    65 72 74 2e 63 6f 6d 2f 73 73 63 61 2d 73 68 61
    32 2d 67 36 2e 63 72 6c 30 4c 06 03 55 1d 20 04
    45 30 43 30 37 06 09 60 86 48 01 86 fd 6c 01 01
    30 2a 30 28 06 08 2b 06 01 05 05 07 02 01 16 1c
    68 74 74 70 73 3a 2f 2f 77 77 77 2e 64 69 67 69
    63 65 72 74 2e 63 6f 6d 2f 43 50 53 30 08 06 06
    67 81 0c 01 02 02 30 7c 06 08 2b 06 01 05 05 07
    01 01 04 70 30 6e 30 24 06 08 2b 06 01 05 05 07
    30 01 86 18 68 74 74 70 3a 2f 2f 6f 63 73 70 2e
    64 69 67 69 63 65 72 74 2e 63 6f 6d 30 46 06 08
    2b 06 01 05 05 07 30 02 86 3a 68 74 74 70 3a 2f
    2f 63 61 63 65 72 74 73 2e 64 69 67 69 63 65 72
    74 2e 63 6f 6d 2f 44 69 67 69 43 65 72 74 53 48
    41 32 53 65 63 75 72 65 53 65 72 76 65 72 43 41
    2e 63 72 74 30 09 06 03 55 1d 13 04 02 30 00 30
    82 01 7f 06 0a 2b 06 01 04 01 d6 79 02 04 02 04
    82 01 6f 04 82 01 6b 01 69 00 76 00 f6 5c 94 2f
    d1 77 30 22 14 54 18 08 30 94 56 8e e3 4d 13 19
    33 bf df 0c 2f 20 0b cc 4e f1 64 e3 00 00 01 71
    45 19 00 e9 00 00 04 03 00 47 30 45 02 21 00 a2
    f6 de 52 e7 c2 af d6 3e 3c 98 cc ad e7 da 73 6c
    fc c1 38 9f 9a 4c bc c3 c0 cc 18 b6 52 5d 61 02
    20 4a d8 13 ea e7 4b 27 92 e0 da 64 86 f8 83 9c
    31 62 4e 82 2f 61 d7 7a 42 b7 dd c5 8c f8 d8 fe
    2c 00 76 00 5c dc 43 92 fe e6 ab 45 44 b1 5e 9a
    d4 56 e6 10 37 fb d5 fa 47 dc a1 73 94 b2 5e e6
    f6 c7 0e ca 00 00 01 71 45 19 01 16 00 00 04 03
    00 47 30 45 02 20 7d ca 00 b1 bb 02 30 59 ea 9c
    8f ba 23 28 f8 c5 59 de e0 5f 41 98 41 2d 7a 00
    08 a1 94 34 b2 b5 02 21 00 c9 91 71 47 d2 3d d2
    b0 3c a5 f3 c9 4a c5 12 81 fe 99 46 e6 6e 55 06
    77 ec ce 9d 31 f0 5e 4d 6f 00 77 00 44 94 65 2e
    b0 ee ce af c4 40 07 d8 a8 fe 28 c0 da e6 82 be
    d8 cb 31 b5 3f d3 33 96 b5 b6 81 a8 00 00 01 71
    45 19 00 e1 00 00 04 03 00 48 30 46 02 21 00 ba
    22 f2 d4 11 44 96 be be 0c b5 be 5b 4a 8b 56 16
    ba b6 08 70 ec db 3a c3 1a 3b 34 ce 42 6b 92 02
    21 00 97 69 76 5a be 19 30 4b ef fe 8a 4a 69 a7
    81 c8 a8 08 26 ee 40 24 f5 83 e6 6d a0 e0 31 4f
    fe 78 30 0d 06 09 2a 86 48 86 f7 0d 01 01 0b 05
    00 03 82 01 01 00 4c eb 84 55 dd b4 27 22 b5 dd
    7a 20 55 2e bb 4d 7b e5 8e cb 91 32 93 e4 89 5e
    69 7d 9b 82 46 35 f5 11 c6 fe 49 56 09 ac 54 84
    d2 a0 d6 dc 4a 30 1f 5c b0 0a 7b e0 e3 8e 12 be
    ee a6 22 8e d8 dd 8b 45 0f be ad f5 5f 10 3b e8
    e3 15 32 40 01 ff 5d e1 61 c4 8e 2e 06 c1 52 80
    25 ac fd d9 65 92 54 03 2b 95 c7 d7 92 0f db 30
    db 3c 9b df 9b e1 c4 8b 7f 6b 2a 26 c9 a4 c5 57
    ef d6 d4 95 34 f7 4a f9 56 00 ab 1f a8 c6 d5 3b
    76 20 e5 97 6a e4 97 90 bd 5a 3d 7b 8e 5f ba 2f
    e3 79 99 2b 15 09 62 0d 95 d6 8a 88 42 41 d7 66
    54 e4 52 9b 01 47 e6 7e 6b 49 ae a8 a1 24 42 06
    19 40 84 9d cc 7d 19 84 d4 06 9a 4a a7 6d 9e 0b
    a4 9e 40 f3 49 d6 ce 91 f9 84 f5 b1 09 df cf 60
    d7 7a 75 fc ef 0e fc 22 1e 5f 22 a7 94 a7 10 c4
    0f 2d c1 a1 48 fa 53 0c 01 af 28 e4 64 11 16 0b
    e1 64 8a a1 62 58 00 00 00 04 98 30 82 04 94 30
    82 03 7c a0 03 02 01 02 02 10 01 fd a3 eb 6e ca
    75 c8 88 43 8b 72 4b cf bc 91 30 0d 06 09 2a 86
    48 86 f7 0d 01 01 0b 05 00 30 61 31 0b 30 09 06
    03 55 04 06 13 02 55 53 31 15 30 13 06 03 55 04
    0a 13 0c 44 69 67 69 43 65 72 74 20 49 6e 63 31
    19 30 17 06 03 55 04 0b 13 10 77 77 77 2e 64 69
    67 69 63 65 72 74 2e 63 6f 6d 31 20 30 1e 06 03
    55 04 03 13 17 44 69 67 69 43 65 72 74 20 47 6c
    6f 62 61 6c 20 52 6f 6f 74 20 43 41 30 1e 17 0d
    31 33 30 33 30 38 31 32 30 30 30 30 5a 17 0d 32
    33 30 33 30 38 31 32 30 30 30 30 5a 30 4d 31 0b
    30 09 06 03 55 04 06 13 02 55 53 31 15 30 13 06
    03 55 04 0a 13 0c 44 69 67 69 43 65 72 74 20 49
    6e 63 31 27 30 25 06 03 55 04 03 13 1e 44 69 67
    69 43 65 72 74 20 53 48 41 32 20 53 65 63 75 72
    65 20 53 65 72 76 65 72 20 43 41 30 82 01 22 30
    0d 06 09 2a 86 48 86 f7 0d 01 01 01 05 00 03 82
    01 0f 00 30 82 01 0a 02 82 01 01 00 dc ae 58 90
    4d c1 c4 30 15 90 35 5b 6e 3c 82 15 f5 2c 5c bd
    e3 db ff 71 43 fa 64 25 80 d4 ee 18 a2 4d f0 66
    d0 0a 73 6e 11 98 36 17 64 af 37 9d fd fa 41 84
    af c7 af 8c fe 1a 73 4d cf 33 97 90 a2 96 87 53
    83 2b b9 a6 75 48 2d 1d 56 37 7b da 31 32 1a d7
    ac ab 06 f4 aa 5d 4b b7 47 46 dd 2a 93 c3 90 2e
    79 80 80 ef 13 04 6a 14 3b b5 9b 92 be c2 07 65
    4e fc da fc ff 7a ae dc 5c 7e 55 31 0c e8 39 07
    a4 d7 be 2f d3 0b 6a d2 b1 df 5f fe 57 74 53 3b
    35 80 dd ae 8e 44 98 b3 9f 0e d3 da e0 d7 f4 6b
    29 ab 44 a7 4b 58 84 6d 92 4b 81 c3 da 73 8b 12
    97 48 90 04 45 75 1a dd 37 31 97 92 e8 cd 54 0d
    3b e4 c1 3f 39 5e 2e b8 f3 5c 7e 10 8e 86 41 00
    8d 45 66 47 b0 a1 65 ce a0 aa 29 09 4e f3 97 eb
    e8 2e ab 0f 72 a7 30 0e fa c7 f4 fd 14 77 c3 a4
    5b 28 57 c2 b3 f9 82 fd b7 45 58 9b 02 03 01 00
    01 a3 82 01 5a 30 82 01 56 30 12 06 03 55 1d 13
    01 01 ff 04 08 30 06 01 01 ff 02 01 00 30 0e 06
    03 55 1d 0f 01 01 ff 04 04 03 02 01 86 30 34 06
    08 2b 06 01 05 05 07 01 01 04 28 30 26 30 24 06
    08 2b 06 01 05 05 07 30 01 86 18 68 74 74 70 3a
    2f 2f 6f 63 73 70 2e 64 69 67 69 63 65 72 74 2e
    63 6f 6d 30 7b 06 03 55 1d 1f 04 74 30 72 30 37
    a0 35 a0 33 86 31 68 74 74 70 3a 2f 2f 63 72 6c
    33 2e 64 69 67 69 63 65 72 74 2e 63 6f 6d 2f 44
    69 67 69 43 65 72 74 47 6c 6f 62 61 6c 52 6f 6f
    74 43 41 2e 63 72 6c 30 37 a0 35 a0 33 86 31 68
    74 74 70 3a 2f 2f 63 72 6c 34 2e 64 69 67 69 63
    65 72 74 2e 63 6f 6d 2f 44 69 67 69 43 65 72 74
    47 6c 6f 62 61 6c 52 6f 6f 74 43 41 2e 63 72 6c
    30 3d 06 03 55 1d 20 04 36 30 34 30 32 06 04 55
    1d 20 00 30 2a 30 28 06 08 2b 06 01 05 05 07 02
    01 16 1c 68 74 74 70 73 3a 2f 2f 77 77 77 2e 64
    69 67 69 63 65 72 74 2e 63 6f 6d 2f 43 50 53 30
    1d 06 03 55 1d 0e 04 16 04 14 0f 80 61 1c 82 31
    61 d5 2f 28 e7 8d 46 38 b4 2c e1 c6 d9 e2 30 1f
    06 03 55 1d 23 04 18 30 16 80 14 03 de 50 35 56
    d1 4c bb 66 f0 a3 e2 1b 1b c3 97 b2 3d d1 55 30
    0d 06 09 2a 86 48 86 f7 0d 01 01 0b 05 00 03 82
    01 01 00 23 3e df 4b d2 31 42 a5 b6 7e 42 5c 1a
    44 cc 69 d1 68 b4 5d 4b e0 04 21 6c 4b e2 6d cc
    b1 e0 97 8f a6 53 09 cd aa 2a 65 e5 39 4f 1e 83
    a5 6e 5c 98 a2 24 26 e6 fb a1 ed 93 c7 2e 02 c6
    4d 4a bf b0 42 df 78 da b3 a8 f9 6d ff 21 85 53
    36 60 4c 76 ce ec 38 dc d6 51 80 f0 c5 d6 e5 d4
    4d 27 64 ab 9b c7 3e 71 fb 48 97 b8 33 6d c9 13
    07 ee 96 a2 1b 18 15 f6 5c 4c 40 ed b3 c2 ec ff
    71 c1 e3 47 ff d4 b9 00 b4 37 42 da 20 c9 ea 6e
    8a ee 14 06 ae 7d a2 59 98 88 a8 1b 6f 2d f4 f2
    c9 14 5f 26 cf 2c 8d 7e ed 37 c0 a9 d5 39 b9 82
    bf 19 0c ea 34 af 00 21 68 f8 ad 73 e2 c9 32 da
    38 25 0b 55 d3 9a 1d f0 68 86 ed 2e 41 34 ef 7c
    a5 50 1d bf 3a f9 d3 c1 08 0c e6 ed 1e 8a 58 25
    e4 b8 77 ad 2d 6e f5 52 dd b4 74 8f ab 49 2e 9d
    3b 93 34 28 1f 78 ce 94 ea c7 bd d3 c9 6d 1c de
    5c 32 f3 00 00
depth=2 C = US, O = DigiCert Inc, OU = www.digicert.com, CN = DigiCert Global Root CA
verify return:1
depth=1 C = US, O = DigiCert Inc, CN = DigiCert SHA2 Secure Server CA
verify return:1
depth=0 C = US, ST = Virginia, L = Arlington, O = Defense Advanced Research Project Agency, CN = www.darpa.mil
verify return:1
<<< ??? [length 0005]
    17 03 03 01 19
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 0108], CertificateVerify
    0f 00 01 04 08 04 01 00 8b ca c2 79 77 f4 c8 37
    88 cb 5e 5f 6b 55 a3 d0 1b 39 30 b6 ec 1c a6 5e
    4f 90 0b a0 51 76 3c a9 91 7b f9 1f dd 22 b9 5d
    38 1a c4 1f 75 39 45 64 c1 83 53 c2 4d 03 a0 79
    b3 85 0a c7 88 2f 71 24 e8 97 b4 5d a1 00 42 1f
    3b e3 18 da e4 c8 e4 5f 52 56 10 3d 04 52 fb 21
    ea 62 eb 5e 41 2b 4c 91 67 09 29 a3 6d 60 2f a4
    2e 43 3a d4 76 68 d0 73 a7 83 2c 87 b9 d0 37 db
    7e ca a1 5f e3 35 e3 56 de b5 96 29 69 41 4a 96
    68 b2 4a e6 28 9f 68 80 fc ab ae 9b 54 f0 76 0e
    aa f7 20 21 98 96 ef 9a 18 6b 47 f0 e5 b1 81 b6
    5f 0e 3d 2c 1d e7 86 59 09 8a a5 4a 48 33 56 18
    39 d5 13 cc bd 3b 3b e4 f2 48 e7 db 6d 88 f2 ee
    aa c8 4e 2f c9 66 ff a0 8b c1 8a 4f 81 8c 9c a7
    5e e3 c8 b7 78 ae 27 9c dd 26 2f 62 08 a4 aa c7
    00 30 74 e6 71 a4 9e f5 0c 8d 87 a7 3e 57 09 b7
    a2 92 69 ba a7 f1 d7 da
<<< ??? [length 0005]
    17 03 03 00 45
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 0034], Finished
    14 00 00 30 0c 7e 09 64 11 e8 af 6f 33 9c 5d 8e
    0a e2 99 b9 e0 e7 30 2b a9 6c ce 78 3c 2e 95 84
    21 af 34 4c c6 a5 ad cc 51 14 27 80 f4 08 3e 0a
    08 13 f6 80
>>> ??? [length 0005]
    14 03 03 00 01
>>> TLS 1.3, ChangeCipherSpec [length 0001]
    01
>>> ??? [length 0005]
    17 03 03 00 45
>>> TLS 1.3 [length 0001]
    16
>>> TLS 1.3, Handshake [length 0034], Finished
    14 00 00 30 52 7c 52 5f 41 19 12 ba 49 4d 3f 65
    90 83 58 d4 5c 05 14 85 4e 1b d4 7a 0f f3 3f 80
    a9 f9 ad ca 76 d5 65 dc 4d 34 76 33 10 39 28 4a
    b1 79 fd f8
---
Certificate chain
 0 s:C = US, ST = Virginia, L = Arlington, O = Defense Advanced Research Project Agency, CN = www.darpa.mil
   i:C = US, O = DigiCert Inc, CN = DigiCert SHA2 Secure Server CA
 1 s:C = US, O = DigiCert Inc, CN = DigiCert SHA2 Secure Server CA
   i:C = US, O = DigiCert Inc, OU = www.digicert.com, CN = DigiCert Global Root CA
---
Server certificate
-----BEGIN CERTIFICATE-----
MIIG1zCCBb+gAwIBAgIQDPEcLnmfhUG+bhDu+reQFTANBgkqhkiG9w0BAQsFADBN
MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMScwJQYDVQQDEx5E
aWdpQ2VydCBTSEEyIFNlY3VyZSBTZXJ2ZXIgQ0EwHhcNMjAwNDA0MDAwMDAwWhcN
MjEwNzA0MTIwMDAwWjB/MQswCQYDVQQGEwJVUzERMA8GA1UECBMIVmlyZ2luaWEx
EjAQBgNVBAcTCUFybGluZ3RvbjExMC8GA1UEChMoRGVmZW5zZSBBZHZhbmNlZCBS
ZXNlYXJjaCBQcm9qZWN0IEFnZW5jeTEWMBQGA1UEAxMNd3d3LmRhcnBhLm1pbDCC
ASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALV112qbNk/CMnLEe/KMOBRs
z8uz3qaI5lRU+ZRxkdrfWRg0DOJUMZRPLaylW2DbTTBk+2+rkbPF0JcAp2Wf9v6P
jwp2tRUV4PA4Dyoxbj7mYUyXFrjSNutv/vlBfEOGpOct7fXnIvPGsL6QBFGPzHAL
fbe4d5oWzNYzLMID2dKO8whBR1bLW3Z7a9M93tpRTWFwBcDuiMoxFpf3cZqGm5tt
STQAtfzWZxcOcHNbYQZmWHIZ40RQyC/KB2ajmn/eAXPIwL0rskO63bA+Eb8nBkEH
w4tKg+7iNotqJ0o4Qvtlk7qTxqxMSyU1NXPbU5ry33MF+7gFgXmxL9aUxcVXj9cC
AwEAAaOCA38wggN7MB8GA1UdIwQYMBaAFA+AYRyCMWHVLyjnjUY4tCzhxtniMB0G
A1UdDgQWBBR0Xvi7+FTxTQiB6xyUWl4GbbSo1TBDBgNVHREEPDA6gg13d3cuZGFy
cGEubWlsgglkYXJwYS5taWyCD2xvZ2luLmRhcnBhLm1pbIINc3NvLmRhcnBhLm1p
bDAOBgNVHQ8BAf8EBAMCBaAwHQYDVR0lBBYwFAYIKwYBBQUHAwEGCCsGAQUFBwMC
MGsGA1UdHwRkMGIwL6AtoCuGKWh0dHA6Ly9jcmwzLmRpZ2ljZXJ0LmNvbS9zc2Nh
LXNoYTItZzYuY3JsMC+gLaArhilodHRwOi8vY3JsNC5kaWdpY2VydC5jb20vc3Nj
YS1zaGEyLWc2LmNybDBMBgNVHSAERTBDMDcGCWCGSAGG/WwBATAqMCgGCCsGAQUF
BwIBFhxodHRwczovL3d3dy5kaWdpY2VydC5jb20vQ1BTMAgGBmeBDAECAjB8Bggr
BgEFBQcBAQRwMG4wJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLmRpZ2ljZXJ0LmNv
bTBGBggrBgEFBQcwAoY6aHR0cDovL2NhY2VydHMuZGlnaWNlcnQuY29tL0RpZ2lD
ZXJ0U0hBMlNlY3VyZVNlcnZlckNBLmNydDAJBgNVHRMEAjAAMIIBfwYKKwYBBAHW
eQIEAgSCAW8EggFrAWkAdgD2XJQv0XcwIhRUGAgwlFaO400TGTO/3wwvIAvMTvFk
4wAAAXFFGQDpAAAEAwBHMEUCIQCi9t5S58Kv1j48mMyt59pzbPzBOJ+aTLzDwMwY
tlJdYQIgStgT6udLJ5Lg2mSG+IOcMWJOgi9h13pCt93FjPjY/iwAdgBc3EOS/uar
RUSxXprUVuYQN/vV+kfcoXOUsl7m9scOygAAAXFFGQEWAAAEAwBHMEUCIH3KALG7
AjBZ6pyPuiMo+MVZ3uBfQZhBLXoACKGUNLK1AiEAyZFxR9I90rA8pfPJSsUSgf6Z
RuZuVQZ37M6dMfBeTW8AdwBElGUusO7Or8RAB9io/ijA2uaCvtjLMbU/0zOWtbaB
qAAAAXFFGQDhAAAEAwBIMEYCIQC6IvLUEUSWvr4Mtb5bSotWFrq2CHDs2zrDGjs0
zkJrkgIhAJdpdlq+GTBL7/6KSmmngcioCCbuQCT1g+ZtoOAxT/54MA0GCSqGSIb3
DQEBCwUAA4IBAQBM64RV3bQnIrXdeiBVLrtNe+WOy5Eyk+SJXml9m4JGNfURxv5J
VgmsVITSoNbcSjAfXLAKe+DjjhK+7qYijtjdi0UPvq31XxA76OMVMkAB/13hYcSO
LgbBUoAlrP3ZZZJUAyuVx9eSD9sw2zyb35vhxIt/ayomyaTFV+/W1JU090r5VgCr
H6jG1Tt2IOWXauSXkL1aPXuOX7ov43mZKxUJYg2V1oqIQkHXZlTkUpsBR+Z+a0mu
qKEkQgYZQISdzH0ZhNQGmkqnbZ4LpJ5A80nWzpH5hPWxCd/PYNd6dfzvDvwiHl8i
p5SnEMQPLcGhSPpTDAGvKORkERYL4WSKoWJY
-----END CERTIFICATE-----
subject=C = US, ST = Virginia, L = Arlington, O = Defense Advanced Research Project Agency, CN = www.darpa.mil

issuer=C = US, O = DigiCert Inc, CN = DigiCert SHA2 Secure Server CA

---
No client certificate CA names sent
Peer signing digest: SHA256
Peer signature type: RSA-PSS
Server Temp Key: X25519, 253 bits
---
SSL handshake has read 3506 bytes and written 395 bytes
Verification: OK
---
New, TLSv1.3, Cipher is TLS_AES_256_GCM_SHA384
Server public key is 2048 bit
Secure Renegotiation IS NOT supported
Compression: NONE
Expansion: NONE
No ALPN negotiated
Early data was not sent
Verify return code: 0 (ok)
---
<<< ??? [length 0005]
    17 03 03 01 0a
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 00f9], NewSessionTicket
    04 00 00 f5 00 01 44 9c 2f a6 9e ab 08 00 00 00
    00 00 00 00 00 00 e0 00 00 32 81 f3 58 8f 5c a4
    51 82 cf e9 a8 d6 a9 50 13 de 9a 07 c6 8d 1f 51
    51 f4 ac 27 5f 51 87 9c 04 83 b4 09 c1 71 35 aa
    02 f8 4b 93 d7 14 78 1e 30 24 74 dc ea 6b ed 73
    5c 50 50 f0 c4 89 16 26 5b cf 3c b2 3e fe 7a c4
    32 07 6f 36 11 66 61 15 48 bc c1 a5 68 dd 63 51
    1d 89 e2 27 56 3c 33 8e 7d 05 80 92 fa ad b9 ce
    9b 65 a4 17 8d 1d a6 08 67 61 10 9d 57 06 4f 7f
    86 53 e0 6f 92 66 76 be 7c 30 d2 d1 8d 98 32 ea
    71 de 5f 9c 11 f4 27 69 25 34 bb c8 15 5b 6e b3
    0b 34 21 54 21 3f 8f 01 72 17 84 a5 b0 60 da 95
    63 7e 23 70 4d 52 15 98 d7 df bf 5b 04 86 06 a2
    5c 9e c8 33 5a bc 9f e2 1e ae 0f 45 7f 4d c3 bd
    d4 52 be a7 83 90 cf 09 29 6c cf 18 c9 06 79 4c
    55 6b 13 d4 3f a2 17 00 00
---
Post-Handshake New Session Ticket arrived:
SSL-Session:
    Protocol  : TLSv1.3
    Cipher    : TLS_AES_256_GCM_SHA384
    Session-ID: 17F1B4F1FBA4A405182DC4578A0193AE6463984D7C4CCD7D7E22238855E71EDE
    Session-ID-ctx: 
    Resumption PSK: B6E5F2BAC65CCD806F9F8ADD941B9149DCD194ED6C7C3D71170367BBA9A3A4DF1E64BC5EF83758923A3991A4E169B6DC
    PSK identity: None
    PSK identity hint: None
    SRP username: None
    TLS session ticket lifetime hint: 83100 (seconds)
    TLS session ticket:
    0000 - 00 00 32 81 f3 58 8f 5c-a4 51 82 cf e9 a8 d6 a9   ..2..X.\.Q......
    0010 - 50 13 de 9a 07 c6 8d 1f-51 51 f4 ac 27 5f 51 87   P.......QQ..'_Q.
    0020 - 9c 04 83 b4 09 c1 71 35-aa 02 f8 4b 93 d7 14 78   ......q5...K...x
    0030 - 1e 30 24 74 dc ea 6b ed-73 5c 50 50 f0 c4 89 16   .0$t..k.s\PP....
    0040 - 26 5b cf 3c b2 3e fe 7a-c4 32 07 6f 36 11 66 61   &[.<.>.z.2.o6.fa
    0050 - 15 48 bc c1 a5 68 dd 63-51 1d 89 e2 27 56 3c 33   .H...h.cQ...'V<3
    0060 - 8e 7d 05 80 92 fa ad b9-ce 9b 65 a4 17 8d 1d a6   .}........e.....
    0070 - 08 67 61 10 9d 57 06 4f-7f 86 53 e0 6f 92 66 76   .ga..W.O..S.o.fv
    0080 - be 7c 30 d2 d1 8d 98 32-ea 71 de 5f 9c 11 f4 27   .|0....2.q._...'
    0090 - 69 25 34 bb c8 15 5b 6e-b3 0b 34 21 54 21 3f 8f   i%4...[n..4!T!?.
    00a0 - 01 72 17 84 a5 b0 60 da-95 63 7e 23 70 4d 52 15   .r....`..c~#pMR.
    00b0 - 98 d7 df bf 5b 04 86 06-a2 5c 9e c8 33 5a bc 9f   ....[....\..3Z..
    00c0 - e2 1e ae 0f 45 7f 4d c3-bd d4 52 be a7 83 90 cf   ....E.M...R.....
    00d0 - 09 29 6c cf 18 c9 06 79-4c 55 6b 13 d4 3f a2 17   .)l....yLUk..?..

    Start Time: 1617603429
    Timeout   : 7200 (sec)
    Verify return code: 0 (ok)
    Extended master secret: no
    Max Early Data: 0
---
read R BLOCK
<<< ??? [length 0005]
    17 03 03 01 0a
<<< TLS 1.3 [length 0001]
    16
<<< TLS 1.3, Handshake [length 00f9], NewSessionTicket
    04 00 00 f5 00 01 44 9c d1 de f5 32 08 00 00 00
    00 00 00 00 01 00 e0 00 00 32 81 f3 58 8f 5c a4
    51 82 cf e9 a8 d6 a9 31 6d d0 9b be c3 58 e9 c6
    93 00 10 13 c2 3d 64 20 cb b6 8c ab 5d 50 a8 ce
    dd d5 31 e7 56 3e f3 93 c7 6d b5 db 39 e5 f3 4c
    32 52 64 5c b4 25 95 98 91 ed 0f fa 5a 21 af a3
    13 d3 90 3b 39 ad 9f 8d 43 95 52 f4 c1 ac a2 c7
    b9 7b 9d 21 73 2c 69 7c 99 34 a8 6e eb 40 dd 01
    bf 7a b5 c7 ee b5 84 45 a5 9f 3c c6 c2 8e a9 f1
    8d 7d e1 a9 f8 33 4f 14 70 15 b0 d0 4a c5 6e 14
    10 41 26 94 52 1a 40 0d 4f bb 93 1b 94 45 be 52
    54 97 f8 ba 59 fe bd 08 09 aa 09 21 77 4f 96 b2
    ef 18 12 21 0b c7 a9 ba 56 c5 2c a0 8c 74 e8 9e
    4e ce 35 bc b5 24 d8 ce 0c 94 26 75 b6 2c dc 99
    ad 2d e8 2d 88 06 b4 3b d5 3a c0 e7 a7 97 2e 6e
    f2 ba 88 7e 0c 05 4a 00 00
---
Post-Handshake New Session Ticket arrived:
SSL-Session:
    Protocol  : TLSv1.3
    Cipher    : TLS_AES_256_GCM_SHA384
    Session-ID: 967809853C91DCDED35C94768E7D10EAAEC44A961F87ABDA9F6E52E5ABB0A1C6
    Session-ID-ctx: 
    Resumption PSK: F01175CCFEC131B678F5A6C23B0F4DB7F020BE4F5D1AFA7B43B312B47D731E8D8B73B93C2F7BDB3F092018945208E360
    PSK identity: None
    PSK identity hint: None
    SRP username: None
    TLS session ticket lifetime hint: 83100 (seconds)
    TLS session ticket:
    0000 - 00 00 32 81 f3 58 8f 5c-a4 51 82 cf e9 a8 d6 a9   ..2..X.\.Q......
    0010 - 31 6d d0 9b be c3 58 e9-c6 93 00 10 13 c2 3d 64   1m....X.......=d
    0020 - 20 cb b6 8c ab 5d 50 a8-ce dd d5 31 e7 56 3e f3    ....]P....1.V>.
    0030 - 93 c7 6d b5 db 39 e5 f3-4c 32 52 64 5c b4 25 95   ..m..9..L2Rd\.%.
    0040 - 98 91 ed 0f fa 5a 21 af-a3 13 d3 90 3b 39 ad 9f   .....Z!.....;9..
    0050 - 8d 43 95 52 f4 c1 ac a2-c7 b9 7b 9d 21 73 2c 69   .C.R......{.!s,i
    0060 - 7c 99 34 a8 6e eb 40 dd-01 bf 7a b5 c7 ee b5 84   |.4.n.@...z.....
    0070 - 45 a5 9f 3c c6 c2 8e a9-f1 8d 7d e1 a9 f8 33 4f   E..<......}...3O
    0080 - 14 70 15 b0 d0 4a c5 6e-14 10 41 26 94 52 1a 40   .p...J.n..A&.R.@
    0090 - 0d 4f bb 93 1b 94 45 be-52 54 97 f8 ba 59 fe bd   .O....E.RT...Y..
    00a0 - 08 09 aa 09 21 77 4f 96-b2 ef 18 12 21 0b c7 a9   ....!wO.....!...
    00b0 - ba 56 c5 2c a0 8c 74 e8-9e 4e ce 35 bc b5 24 d8   .V.,..t..N.5..$.
    00c0 - ce 0c 94 26 75 b6 2c dc-99 ad 2d e8 2d 88 06 b4   ...&u.,...-.-...
    00d0 - 3b d5 3a c0 e7 a7 97 2e-6e f2 ba 88 7e 0c 05 4a   ;.:.....n...~..J

    Start Time: 1617603429
    Timeout   : 7200 (sec)
    Verify return code: 0 (ok)
    Extended master secret: no
    Max Early Data: 0
---
read R BLOCK
<<< ??? [length 0005]
    17 03 03 00 13
<<< TLS 1.3 [length 0001]
    15
<<< TLS 1.3, Alert [length 0002], warning close_notify
    01 00
closed
>>> ??? [length 0005]
    17 03 03 00 13
>>> TLS 1.3 [length 0001]
    15
>>> TLS 1.3, Alert [length 0002], warning close_notify
    01 00
