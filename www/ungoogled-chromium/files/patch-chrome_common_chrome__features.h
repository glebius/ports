--- chrome/common/chrome_features.h.orig	2024-03-22 14:16:19 UTC
+++ chrome/common/chrome_features.h
@@ -60,13 +60,13 @@ BASE_DECLARE_FEATURE(kUseAdHocSigningForWebAppShims);
 #endif  // BUILDFLAG(IS_MAC)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kAutofillAddressSurvey);
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kAutofillCardSurvey);
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kAutofillPasswordSurvey);
 #endif
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES)
 BASE_DECLARE_FEATURE(kBackgroundModeAllowRestart);
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
@@ -228,7 +228,7 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 BASE_DECLARE_FEATURE(kDesktopPWAsTabStripSettings);
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kChromeAppsDeprecation);
 COMPONENT_EXPORT(CHROME_FEATURES)
 BASE_DECLARE_FEATURE(kShortcutsNotApps);
@@ -572,7 +572,7 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 BASE_DECLARE_FEATURE(kLacrosSharedComponentsDir);
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kLinuxLowMemoryMonitor);
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::FeatureParam<int> kLinuxLowMemoryMonitorModerateLevel;
@@ -580,7 +580,7 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::FeatureParam<int> kLinuxLowMemoryMonitorCriticalLevel;
 #endif  // BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES) BASE_DECLARE_FEATURE(kListWebAppsSwitch);
 #endif
 
