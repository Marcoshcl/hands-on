# Herda as configurações do emulador (produto sdk_phone_x86_64)
$(call inherit-product, $(SRC_TARGET_DIR)/product/sdk_phone_x86_64.mk)

# Sobrescreve algumas variáveis com os dados do novo produto
PRODUCT_NAME := devtitans_handson
PRODUCT_DEVICE := handson
PRODUCT_BRAND := HandsonBrand
PRODUCT_MODEL := HandsonModel

# Cliente de Linha de Comando para o Serviço Smartlamp
PRODUCT_PACKAGES += smartlamp_service_client

# App Privilegiado de Teste do Serviço Smartlamp
PRODUCT_PACKAGES += SmartlampTestApp