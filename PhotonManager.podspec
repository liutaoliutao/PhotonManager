Pod::Spec.new do |s|

s.name         = 'PhotonManager'
s.version      = "0.0.3"
s.summary      = 'you need my help because you love me'
s.description  = <<-DESC
you need my help because you love me cddd
DESC
s.homepage     = 'https://github.com/liutaoliutao/PhotonManager'
s.license = 'MIT'
s.author             = { "刘陶的mini" => "282325620@qq.com" }
s.source       = { :git => "https://github.com/liutaoliutao/PhotonManager.git", :tag => "0.0.3" }
s.source_files  =  "PhotonManager","PhotonManager/**/*{h,m}"
s.vendored_libraries =
'PhotonManager/Common-cpp/lib/libCommon-cpp_debug_cpp98_iphoneos.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_debug_cpp98_iphonesimulator.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_debug_iphoneos.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_debug_iphonesimulator.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_release_cpp98_iphoneos.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_release_cpp98_iphonesimulator.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_release_iphoneos.a',
'PhotonManager/Common-cpp/lib/libCommon-cpp_release_iphonesimulator.a',
'PhotonManager/Common-objc/lib/libCommon-objc_debug_iphoneos.a',
'PhotonManager/Common-objc/lib/libCommon-objc_release_iphoneos.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_debug_cpp98_iphoneos.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_debug_cpp98_iphonesimulator.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_debug_iphoneos.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_debug_iphonesimulator.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_release_cpp98_iphoneos.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_release_cpp98_iphonesimulator.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_release_iphoneos.a',
'PhotonManager/Photon-cpp/lib/libPhoton-cpp_release_iphonesimulator.a',
'PhotonManager/Photon-objc/lib/libPhoton-objc_debug_iphoneos.a',
'PhotonManager/Photon-objc/lib/libPhoton-objc_release_iphoneos.a'

s.platform = :ios, "8.0"


end
