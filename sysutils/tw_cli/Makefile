PORTNAME=	tw_cli
PORTVERSION=	9.5.5
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	https://docs.broadcom.com/docs-and-downloads/raid-controllers/raid-controllers-common-files/
DISTNAME=	CLI_freebsd-from_the_10-2-2-1_9-5-5-1_codesets
DIST_SUBDIR=	3dm2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	3ware storage controllers management CLI
WWW=		http://3ware.com/support/download.asp

LICENSE=	tw_cli
LICENSE_NAME=	BROADCOM
LICENSE_TEXT=	Source recipient must acknowledge license.\
		Reproduction or redistribution prohibited.\
		See https://www.broadcom.com/cs/Satellite?pagename=AVG2/Utilities/EulaMsg
LICENSE_PERMS=	no-dist-mirror no-dist-sell no-pkg-mirror no-pkg-sell auto-accept

ONLY_FOR_ARCHS=	amd64 i386

USES=		zip

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
SUB_FILES=	407.status-3ware-raid
PORTDOCS=	tw_cli.8.html
PLIST_FILES=	etc/periodic/daily/407.status-3ware-raid\
		share/man/man8/tw_cli.8.gz sbin/tw_cli

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${ARCH:S,i386,x86,:S,amd64,x86_64,}/tw_cli\
		${STAGEDIR}${PREFIX}/sbin/tw_cli
	${INSTALL_MAN} ${WRKSRC}/tw_cli.8.nroff\
		${STAGEDIR}${PREFIX}/share/man/man8/tw_cli.8
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/407.status-3ware-raid \
		${STAGEDIR}${PREFIX}/etc/periodic/daily/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
