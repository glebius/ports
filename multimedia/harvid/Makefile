PORTNAME=	harvid
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.1
PORTREVISION=	4
CATEGORIES=	multimedia

MAINTAINER=	marcelbonnet@gmail.com
COMMENT=	Extract still images from movies and serve them via HTTP
WWW=		https://x42.github.io/harvid/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libpng.so:graphics/png

USES=		gmake jpeg localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	x42
LLD_UNSAFE=	yes

MAKE_JOBS_UNSAFE=	yes # https://github.com/x42/harvid/issues/5

PLIST_FILES=	bin/harvid \
		share/man/man1/harvid.1.gz

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/harvid

.include <bsd.port.mk>
