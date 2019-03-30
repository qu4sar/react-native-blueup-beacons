
Pod::Spec.new do |s|
  s.name         = "RNBlueBeacon"
  s.version      = "1.0.0"
  s.summary      = "RNBlueBeacon"
  s.description  = <<-DESC
                  RNBlueBeacon
                   DESC
  s.homepage     = ""
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "Salif Omar Faye" => "salifomar.faye@stride-it.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/author/RNBlueBeacon.git", :tag => "master" }
  s.source_files  = "RNBlueBeacon/**/*.{h,m}"
  s.requires_arc = true


  s.dependency "React"
  #s.dependency "others"

end

  