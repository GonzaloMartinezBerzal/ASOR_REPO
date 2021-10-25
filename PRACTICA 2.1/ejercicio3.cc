#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(){
	char *s;
	for(int i = 0; i < 255; i++)
		printf("Error %i : %s\n", i+1, strerror(i));
	return 1;
}

/*
Error 1 : Success
Error 2 : Operation not permitted
Error 3 : No such file or directory
Error 4 : No such process
Error 5 : Interrupted system call
Error 6 : Input/output error
Error 7 : No such device or address
Error 8 : Argument list too long
Error 9 : Exec format error
Error 10 : Bad file descriptor
Error 11 : No child processes
Error 12 : Resource temporarily unavailable
Error 13 : Cannot allocate memory
Error 14 : Permission denied
Error 15 : Bad address
Error 16 : Block device required
Error 17 : Device or resource busy
Error 18 : File exists
Error 19 : Invalid cross-device link
Error 20 : No such device
Error 21 : Not a directory
Error 22 : Is a directory
Error 23 : Invalid argument
Error 24 : Too many open files in system
Error 25 : Too many open files
Error 26 : Inappropriate ioctl for device
Error 27 : Text file busy
Error 28 : File too large
Error 29 : No space left on device
Error 30 : Illegal seek
Error 31 : Read-only file system
Error 32 : Too many links
Error 33 : Broken pipe
Error 34 : Numerical argument out of domain
Error 35 : Numerical result out of range
Error 36 : Resource deadlock avoided
Error 37 : File name too long
Error 38 : No locks available
Error 39 : Function not implemented
Error 40 : Directory not empty
Error 41 : Too many levels of symbolic links
Error 42 : Unknown error 41
Error 43 : No message of desired type
Error 44 : Identifier removed
Error 45 : Channel number out of range
Error 46 : Level 2 not synchronized
Error 47 : Level 3 halted
Error 48 : Level 3 reset
Error 49 : Link number out of range
Error 50 : Protocol driver not attached
Error 51 : No CSI structure available
Error 52 : Level 2 halted
Error 53 : Invalid exchange
Error 54 : Invalid request descriptor
Error 55 : Exchange full
Error 56 : No anode
Error 57 : Invalid request code
Error 58 : Invalid slot
Error 59 : Unknown error 58
Error 60 : Bad font file format
Error 61 : Device not a stream
Error 62 : No data available
Error 63 : Timer expired
Error 64 : Out of streams resources
Error 65 : Machine is not on the network
Error 66 : Package not installed
Error 67 : Object is remote
Error 68 : Link has been severed
Error 69 : Advertise error
Error 70 : Srmount error
Error 71 : Communication error on send
Error 72 : Protocol error
Error 73 : Multihop attempted
Error 74 : RFS specific error
Error 75 : Bad message
Error 76 : Value too large for defined data type
Error 77 : Name not unique on network
Error 78 : File descriptor in bad state
Error 79 : Remote address changed
Error 80 : Can not access a needed shared library
Error 81 : Accessing a corrupted shared library
Error 82 : .lib section in a.out corrupted
Error 83 : Attempting to link in too many shared libraries
Error 84 : Cannot exec a shared library directly
Error 85 : Invalid or incomplete multibyte or wide character
Error 86 : Interrupted system call should be restarted
Error 87 : Streams pipe error
Error 88 : Too many users
Error 89 : Socket operation on non-socket
Error 90 : Destination address required
Error 91 : Message too long
Error 92 : Protocol wrong type for socket
Error 93 : Protocol not available
Error 94 : Protocol not supported
Error 95 : Socket type not supported
Error 96 : Operation not supported
Error 97 : Protocol family not supported
Error 98 : Address family not supported by protocol
Error 99 : Address already in use
Error 100 : Cannot assign requested address
Error 101 : Network is down
Error 102 : Network is unreachable
Error 103 : Network dropped connection on reset
Error 104 : Software caused connection abort
Error 105 : Connection reset by peer
Error 106 : No buffer space available
Error 107 : Transport endpoint is already connected
Error 108 : Transport endpoint is not connected
Error 109 : Cannot send after transport endpoint shutdown
Error 110 : Too many references: cannot splice
Error 111 : Connection timed out
Error 112 : Connection refused
Error 113 : Host is down
Error 114 : No route to host
Error 115 : Operation already in progress
Error 116 : Operation now in progress
Error 117 : Stale file handle
Error 118 : Structure needs cleaning
Error 119 : Not a XENIX named type file
Error 120 : No XENIX semaphores available
Error 121 : Is a named type file
Error 122 : Remote I/O error
Error 123 : Disk quota exceeded
Error 124 : No medium found
Error 125 : Wrong medium type
Error 126 : Operation canceled
Error 127 : Required key not available
Error 128 : Key has expired
Error 129 : Key has been revoked
Error 130 : Key was rejected by service
Error 131 : Owner died
Error 132 : State not recoverable
Error 133 : Operation not possible due to RF-kill
Error 134 : Memory page has hardware error
Error 135 : Unknown error 134
Error 136 : Unknown error 135
Error 137 : Unknown error 136
Error 138 : Unknown error 137
Error 139 : Unknown error 138
Error 140 : Unknown error 139
Error 141 : Unknown error 140
Error 142 : Unknown error 141
Error 143 : Unknown error 142
Error 144 : Unknown error 143
Error 145 : Unknown error 144
Error 146 : Unknown error 145
Error 147 : Unknown error 146
Error 148 : Unknown error 147
Error 149 : Unknown error 148
Error 150 : Unknown error 149
Error 151 : Unknown error 150
Error 152 : Unknown error 151
Error 153 : Unknown error 152
Error 154 : Unknown error 153
Error 155 : Unknown error 154
Error 156 : Unknown error 155
Error 157 : Unknown error 156
Error 158 : Unknown error 157
Error 159 : Unknown error 158
Error 160 : Unknown error 159
Error 161 : Unknown error 160
Error 162 : Unknown error 161
Error 163 : Unknown error 162
Error 164 : Unknown error 163
Error 165 : Unknown error 164
Error 166 : Unknown error 165
Error 167 : Unknown error 166
Error 168 : Unknown error 167
Error 169 : Unknown error 168
Error 170 : Unknown error 169
Error 171 : Unknown error 170
Error 172 : Unknown error 171
Error 173 : Unknown error 172
Error 174 : Unknown error 173
Error 175 : Unknown error 174
Error 176 : Unknown error 175
Error 177 : Unknown error 176
Error 178 : Unknown error 177
Error 179 : Unknown error 178
Error 180 : Unknown error 179
Error 181 : Unknown error 180
Error 182 : Unknown error 181
Error 183 : Unknown error 182
Error 184 : Unknown error 183
Error 185 : Unknown error 184
Error 186 : Unknown error 185
Error 187 : Unknown error 186
Error 188 : Unknown error 187
Error 189 : Unknown error 188
Error 190 : Unknown error 189
Error 191 : Unknown error 190
Error 192 : Unknown error 191
Error 193 : Unknown error 192
Error 194 : Unknown error 193
Error 195 : Unknown error 194
Error 196 : Unknown error 195
Error 197 : Unknown error 196
Error 198 : Unknown error 197
Error 199 : Unknown error 198
Error 200 : Unknown error 199
Error 201 : Unknown error 200
Error 202 : Unknown error 201
Error 203 : Unknown error 202
Error 204 : Unknown error 203
Error 205 : Unknown error 204
Error 206 : Unknown error 205
Error 207 : Unknown error 206
Error 208 : Unknown error 207
Error 209 : Unknown error 208
Error 210 : Unknown error 209
Error 211 : Unknown error 210
Error 212 : Unknown error 211
Error 213 : Unknown error 212
Error 214 : Unknown error 213
Error 215 : Unknown error 214
Error 216 : Unknown error 215
Error 217 : Unknown error 216
Error 218 : Unknown error 217
Error 219 : Unknown error 218
Error 220 : Unknown error 219
Error 221 : Unknown error 220
Error 222 : Unknown error 221
Error 223 : Unknown error 222
Error 224 : Unknown error 223
Error 225 : Unknown error 224
Error 226 : Unknown error 225
Error 227 : Unknown error 226
Error 228 : Unknown error 227
Error 229 : Unknown error 228
Error 230 : Unknown error 229
Error 231 : Unknown error 230
Error 232 : Unknown error 231
Error 233 : Unknown error 232
Error 234 : Unknown error 233
Error 235 : Unknown error 234
Error 236 : Unknown error 235
Error 237 : Unknown error 236
Error 238 : Unknown error 237
Error 239 : Unknown error 238
Error 240 : Unknown error 239
Error 241 : Unknown error 240
Error 242 : Unknown error 241
Error 243 : Unknown error 242
Error 244 : Unknown error 243
Error 245 : Unknown error 244
Error 246 : Unknown error 245
Error 247 : Unknown error 246
Error 248 : Unknown error 247
Error 249 : Unknown error 248
Error 250 : Unknown error 249
Error 251 : Unknown error 250
Error 252 : Unknown error 251
Error 253 : Unknown error 252
Error 254 : Unknown error 253
Error 255 : Unknown error 254
*/
