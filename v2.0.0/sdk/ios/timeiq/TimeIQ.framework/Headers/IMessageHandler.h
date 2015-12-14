//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/common/messageHandler/IMessageHandler.java
//

#ifndef _IMessageHandler_H_
#define _IMessageHandler_H_

@protocol IMessageListener;

#import "JB.h"

/**
 @brief This is the main communication channel between the SDK and its users.
 The user should register to the MessageHandler with a MessageListener and receive messages through it. On application startup - the user should first register and then init the message handler in order to avoid loosing accumulated messages. On application shutdown - be sure to unregister and dispose.
 */
@protocol IMessageHandler < NSObject >

/**
 @brief Initialization of the Message Handler.
 Should be called after registering at least one listener. All messages that were sent before init will be accumulated. When init is called: if there are listeners registered they will get the accumulated messages if there are no listeners registered yet - the accumulated messages will be lost
 */
- (void)init__ OBJC_METHOD_FAMILY_NONE;

/**
 @brief Registers a listener to the messages sent by the Message Handler.
 @param listener - a class that implements IMessageListener who will be handling the received messages.
 */
- (void)register__WithIMessageListener:(id<IMessageListener>)listener;

/**
 @brief Unregisters the specified listener from the Message Handler.
 This listener will not be receiving any more messages from the SDK.
 @param listener - a class that implements IMessageListener that was registered in the Message Handler to receive messages.
 */
- (void)unRegisterWithIMessageListener:(id<IMessageListener>)listener;

/**
 @brief Clears the Message Handler and disposes any pending messages.
 */
- (void)dispose;

@end

__attribute__((always_inline)) inline void IMessageHandler_init() {}

#define ComIntelWearablePlatformTimeiqApiCommonMessageHandlerIMessageHandler IMessageHandler

#endif // _IMessageHandler_H_