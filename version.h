/* $OpenBSD: version.h,v 1.84 2019/04/03 15:48:45 djm Exp $ */

#define SSH_VERSION	"OpenSSH_8.0"

#define SSH_PORTABLE	"p1"
#define SSH_RELEASE_MINIMUM	SSH_VERSION SSH_PORTABLE
#ifdef SSH_EXTRAVERSION
#define SSH_RELEASE	SSH_RELEASE_MINIMUM " " SSH_EXTRAVERSION
#else
#define SSH_RELEASE	SSH_RELEASE_MINIMUM
#endif
