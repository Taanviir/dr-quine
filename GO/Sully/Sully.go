package main

import (
	"fmt"
	"os"
	"os/exec"
)

func main() {
	i := 5
	if i == 0 {
		return
	}

	filename := fmt.Sprintf("Sully_%d.go", i-1)
	file, err := os.Create(filename)
	if err != nil {
		panic(err)
	}
	defer file.Close()

	template := "package main\n\nimport (\n\t\"fmt\"\n\t\"os\"\n\t\"os/exec\"\n)\n\nfunc main() {\n\ti := %d\n\tif i == 0 {	return }\n\n\tfilename := fmt.Sprintf(\"Sully_%%d.go\", i-1)\n\tfile, err := os.Create(filename)\n\tif err != nil { panic(err) }\n\tdefer file.Close()\n\n\ttemplate := %q\n\tfmt.Fprintf(file, template, i-1, template)\n\n\tcompile := fmt.Sprintf(\"go build -o Sully_%%d Sully_%%d.go\", i-1, i-1)\n\texec.Command(\"bash\", \"-c\", compile).Run()\n\n\texecute := fmt.Sprintf(\"./Sully_%%d\", i-1)\n\texec.Command(\"bash\", \"-c\", execute).Run()\n}\n"
	fmt.Fprintf(file, template, i-1, template)

	compile := fmt.Sprintf("go build -o Sully_%d Sully_%d.go", i-1, i-1)
	exec.Command("bash", "-c", compile).Run()

	execute := fmt.Sprintf("./Sully_%d", i-1)
	exec.Command("bash", "-c", execute).Run()
}
