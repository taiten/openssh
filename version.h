/* $OpenBSD: version.h,v 1.57 2010/03/07 22:01:32 djm Exp $ */

#define SSH_VERSION	"OpenSSH_5.4"

#define SSH_PORTABLE	"p1"
#define SSH_RELEASE_MINIMUM	SSH_VERSION SSH_PORTABLE
#ifdef SSH_EXTRAVERSION
#define SSH_RELEASE	SSH_RELEASE_MINIMUM " " SSH_EXTRAVERSION
#else
#define SSH_RELEASE	SSH_RELEASE_MINIMUM
#endif
