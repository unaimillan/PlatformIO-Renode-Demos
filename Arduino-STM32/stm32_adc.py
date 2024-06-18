# if request.isInit:
#     lastVal = -1
# elif request.isRead:
#     request.value = lastVal + 1
#     lastVal += 1
request.value = 0x0

if request.isRead and request.offset == 0x4C:
    request.value = 0xFAFC
    self.WarningLog("%s on ADC1 at 0x%x, value 0x%x" % (str(request.type), request.offset, request.value))

self.NoisyLog("%s on ADC1 at 0x%x, value 0x%x" % (str(request.type), request.offset, request.value))
