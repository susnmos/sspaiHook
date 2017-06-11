include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SSPaiHook
SSPaiHook_FILES = Tweak.xm
SSPaiHook_LIBRARY = WebKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 sspai"
